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

// Function: entry_0013ccb0
// Address: 0x13ccb0 - 0x13cce8
void entry_0013ccb0_0x13ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ccb0_0x13ccb0");
#endif

    switch (ctx->pc) {
        case 0x13ccb8u: goto label_13ccb8;
        case 0x13ccc0u: goto label_13ccc0;
        default: break;
    }

    ctx->pc = 0x13ccb0u;

    // 0x13ccb0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13CCB0u;
    SET_GPR_U32(ctx, 31, 0x13CCB8u);
    ctx->pc = 0x13CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCB0u;
    // 0x13ccb4: 0x8ee40084  lw          $a0, 0x84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13CCB0u, 0x13CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCB8u;
label_13ccb8:
    // 0x13ccb8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13CCB8u;
    SET_GPR_U32(ctx, 31, 0x13CCC0u);
    ctx->pc = 0x13CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCB8u;
    // 0x13ccbc: 0x8ee40088  lw          $a0, 0x88($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13CCB8u, 0x13CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCC0u;
label_13ccc0:
    // 0x13ccc0: 0x8ee3008c  lw          $v1, 0x8C($s7)
    ctx->pc = 0x13ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x13ccc4: 0x8ee20080  lw          $v0, 0x80($s7)
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x13ccc8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13cccc: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x13ccccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ccd0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13ccd4: 0x8ee40088  lw          $a0, 0x88($s7)
    ctx->pc = 0x13ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
    // 0x13ccd8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13ccdc: 0xaee5008c  sw          $a1, 0x8C($s7)
    ctx->pc = 0x13ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 140), GPR_U32(ctx, 5));
    // 0x13cce0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13CCE0u;
    SET_GPR_U32(ctx, 31, 0x13CCE8u);
    ctx->pc = 0x13CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCE0u;
    // 0x13cce4: 0xaee20080  sw          $v0, 0x80($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13CCE0u, 0x13CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCE8u;
}
