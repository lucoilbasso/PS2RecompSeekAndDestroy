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

// Function: entry_00191db0
// Address: 0x191db0 - 0x191de4
void entry_00191db0_0x191db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191db0_0x191db0");
#endif

    switch (ctx->pc) {
        case 0x191db8u: goto label_191db8;
        case 0x191dc0u: goto label_191dc0;
        default: break;
    }

    ctx->pc = 0x191db0u;

    // 0x191db0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191DB0u;
    SET_GPR_U32(ctx, 31, 0x191DB8u);
    ctx->pc = 0x191DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DB0u;
    // 0x191db4: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191DB0u, 0x191DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DB8u;
label_191db8:
    // 0x191db8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191DB8u;
    SET_GPR_U32(ctx, 31, 0x191DC0u);
    ctx->pc = 0x191DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DB8u;
    // 0x191dbc: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191DB8u, 0x191DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DC0u;
label_191dc0:
    // 0x191dc0: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x191dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x191dc4: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x191dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x191dc8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x191dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x191dcc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x191dd0: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x191dd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191dd8: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x191dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x191ddc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x191DDCu;
    SET_GPR_U32(ctx, 31, 0x191DE4u);
    ctx->pc = 0x191DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DDCu;
    // 0x191de0: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x191DDCu, 0x191DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DE4u;
}
