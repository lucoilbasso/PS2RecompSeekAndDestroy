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

// Function: entry_0016b8f8
// Address: 0x16b8f8 - 0x16b92c
void entry_0016b8f8_0x16b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b8f8_0x16b8f8");
#endif

    switch (ctx->pc) {
        case 0x16b900u: goto label_16b900;
        case 0x16b908u: goto label_16b908;
        default: break;
    }

    ctx->pc = 0x16b8f8u;

    // 0x16b8f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B8F8u;
    SET_GPR_U32(ctx, 31, 0x16B900u);
    ctx->pc = 0x16B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8F8u;
    // 0x16b8fc: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B8F8u, 0x16B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B900u;
label_16b900:
    // 0x16b900: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B900u;
    SET_GPR_U32(ctx, 31, 0x16B908u);
    ctx->pc = 0x16B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B900u;
    // 0x16b904: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B900u, 0x16B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B908u;
label_16b908:
    // 0x16b908: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x16b90c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x16b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x16b910: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16b914: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x16b914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16b918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16b918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16b91c: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x16b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x16b920: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x16b920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x16b924: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16B924u;
    SET_GPR_U32(ctx, 31, 0x16B92Cu);
    ctx->pc = 0x16B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B924u;
    // 0x16b928: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16B924u, 0x16B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B92Cu;
}
