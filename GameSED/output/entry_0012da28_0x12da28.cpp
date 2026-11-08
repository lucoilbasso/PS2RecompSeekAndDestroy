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

// Function: entry_0012da28
// Address: 0x12da28 - 0x12da5c
void entry_0012da28_0x12da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012da28_0x12da28");
#endif

    switch (ctx->pc) {
        case 0x12da30u: goto label_12da30;
        case 0x12da38u: goto label_12da38;
        default: break;
    }

    ctx->pc = 0x12da28u;

    // 0x12da28: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12DA28u;
    SET_GPR_U32(ctx, 31, 0x12DA30u);
    ctx->pc = 0x12DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA28u;
    // 0x12da2c: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12DA28u, 0x12DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA30u;
label_12da30:
    // 0x12da30: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12DA30u;
    SET_GPR_U32(ctx, 31, 0x12DA38u);
    ctx->pc = 0x12DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA30u;
    // 0x12da34: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12DA30u, 0x12DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA38u;
label_12da38:
    // 0x12da38: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x12da38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x12da3c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x12da40: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12da44: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12da48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12da4c: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x12da50: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x12da50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x12da54: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12DA54u;
    SET_GPR_U32(ctx, 31, 0x12DA5Cu);
    ctx->pc = 0x12DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DA54u;
    // 0x12da58: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12DA54u, 0x12DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA5Cu;
}
