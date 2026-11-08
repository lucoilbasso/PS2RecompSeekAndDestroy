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

// Function: entry_0012a350
// Address: 0x12a350 - 0x12a384
void entry_0012a350_0x12a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a350_0x12a350");
#endif

    switch (ctx->pc) {
        case 0x12a358u: goto label_12a358;
        case 0x12a360u: goto label_12a360;
        default: break;
    }

    ctx->pc = 0x12a350u;

    // 0x12a350: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12A350u;
    SET_GPR_U32(ctx, 31, 0x12A358u);
    ctx->pc = 0x12A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A350u;
    // 0x12a354: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12A350u, 0x12A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A358u;
label_12a358:
    // 0x12a358: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12A358u;
    SET_GPR_U32(ctx, 31, 0x12A360u);
    ctx->pc = 0x12A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A358u;
    // 0x12a35c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12A358u, 0x12A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A360u;
label_12a360:
    // 0x12a360: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x12a360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x12a364: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x12a368: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12a36c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x12a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12a370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12a370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a374: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x12a374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x12a378: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x12a378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x12a37c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12A37Cu;
    SET_GPR_U32(ctx, 31, 0x12A384u);
    ctx->pc = 0x12A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A37Cu;
    // 0x12a380: 0xae25008c  sw          $a1, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12A37Cu, 0x12A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A384u;
}
