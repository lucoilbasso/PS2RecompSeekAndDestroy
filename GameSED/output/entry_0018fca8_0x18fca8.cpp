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

// Function: entry_0018fca8
// Address: 0x18fca8 - 0x18fcdc
void entry_0018fca8_0x18fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fca8_0x18fca8");
#endif

    switch (ctx->pc) {
        case 0x18fcb0u: goto label_18fcb0;
        case 0x18fcb8u: goto label_18fcb8;
        default: break;
    }

    ctx->pc = 0x18fca8u;

    // 0x18fca8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18FCA8u;
    SET_GPR_U32(ctx, 31, 0x18FCB0u);
    ctx->pc = 0x18FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCA8u;
    // 0x18fcac: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18FCA8u, 0x18FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCB0u;
label_18fcb0:
    // 0x18fcb0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18FCB0u;
    SET_GPR_U32(ctx, 31, 0x18FCB8u);
    ctx->pc = 0x18FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCB0u;
    // 0x18fcb4: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18FCB0u, 0x18FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCB8u;
label_18fcb8:
    // 0x18fcb8: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x18fcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x18fcbc: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x18fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x18fcc0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x18fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18fcc4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18fcc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fccc: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x18fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x18fcd0: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x18fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x18fcd4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18FCD4u;
    SET_GPR_U32(ctx, 31, 0x18FCDCu);
    ctx->pc = 0x18FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCD4u;
    // 0x18fcd8: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18FCD4u, 0x18FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCDCu;
}
