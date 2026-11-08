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

// Function: entry_0013db08
// Address: 0x13db08 - 0x13db3c
void entry_0013db08_0x13db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013db08_0x13db08");
#endif

    switch (ctx->pc) {
        case 0x13db10u: goto label_13db10;
        case 0x13db18u: goto label_13db18;
        default: break;
    }

    ctx->pc = 0x13db08u;

    // 0x13db08: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DB08u;
    SET_GPR_U32(ctx, 31, 0x13DB10u);
    ctx->pc = 0x13DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB08u;
    // 0x13db0c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DB08u, 0x13DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB10u;
label_13db10:
    // 0x13db10: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DB10u;
    SET_GPR_U32(ctx, 31, 0x13DB18u);
    ctx->pc = 0x13DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB10u;
    // 0x13db14: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DB10u, 0x13DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB18u;
label_13db18:
    // 0x13db18: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13db1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13db20: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13db24: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13db24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13db28: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13db2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13db30: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x13db30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x13db34: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DB34u;
    SET_GPR_U32(ctx, 31, 0x13DB3Cu);
    ctx->pc = 0x13DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB34u;
    // 0x13db38: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DB34u, 0x13DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB3Cu;
}
