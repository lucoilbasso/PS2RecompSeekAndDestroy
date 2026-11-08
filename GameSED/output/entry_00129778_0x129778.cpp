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

// Function: entry_00129778
// Address: 0x129778 - 0x1297ac
void entry_00129778_0x129778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129778_0x129778");
#endif

    switch (ctx->pc) {
        case 0x129780u: goto label_129780;
        case 0x129788u: goto label_129788;
        default: break;
    }

    ctx->pc = 0x129778u;

    // 0x129778: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129778u;
    SET_GPR_U32(ctx, 31, 0x129780u);
    ctx->pc = 0x12977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129778u;
    // 0x12977c: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129778u, 0x129780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129780u;
label_129780:
    // 0x129780: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129780u;
    SET_GPR_U32(ctx, 31, 0x129788u);
    ctx->pc = 0x129784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129780u;
    // 0x129784: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129780u, 0x129788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129788u;
label_129788:
    // 0x129788: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x129788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x12978c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x12978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x129790: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x129794: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x129798: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x129798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x12979c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1297a0: 0xaea5008c  sw          $a1, 0x8C($s5)
    ctx->pc = 0x1297a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    // 0x1297a4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1297A4u;
    SET_GPR_U32(ctx, 31, 0x1297ACu);
    ctx->pc = 0x1297A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1297A4u;
    // 0x1297a8: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1297A4u, 0x1297ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297ACu;
}
