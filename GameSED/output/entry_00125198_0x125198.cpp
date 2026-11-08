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

// Function: entry_00125198
// Address: 0x125198 - 0x1251cc
void entry_00125198_0x125198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125198_0x125198");
#endif

    switch (ctx->pc) {
        case 0x1251a0u: goto label_1251a0;
        case 0x1251a8u: goto label_1251a8;
        default: break;
    }

    ctx->pc = 0x125198u;

    // 0x125198: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125198u;
    SET_GPR_U32(ctx, 31, 0x1251A0u);
    ctx->pc = 0x12519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125198u;
    // 0x12519c: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125198u, 0x1251A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251A0u;
label_1251a0:
    // 0x1251a0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1251A0u;
    SET_GPR_U32(ctx, 31, 0x1251A8u);
    ctx->pc = 0x1251A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251A0u;
    // 0x1251a4: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1251A0u, 0x1251A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251A8u;
label_1251a8:
    // 0x1251a8: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x1251a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x1251ac: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x1251b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1251b4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1251b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1251b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1251b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1251bc: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x1251bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x1251c0: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x1251c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x1251c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1251C4u;
    SET_GPR_U32(ctx, 31, 0x1251CCu);
    ctx->pc = 0x1251C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251C4u;
    // 0x1251c8: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1251C4u, 0x1251CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251CCu;
}
