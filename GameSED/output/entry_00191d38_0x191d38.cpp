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

// Function: entry_00191d38
// Address: 0x191d38 - 0x191d6c
void entry_00191d38_0x191d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d38_0x191d38");
#endif

    switch (ctx->pc) {
        case 0x191d40u: goto label_191d40;
        case 0x191d48u: goto label_191d48;
        default: break;
    }

    ctx->pc = 0x191d38u;

    // 0x191d38: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191D38u;
    SET_GPR_U32(ctx, 31, 0x191D40u);
    ctx->pc = 0x191D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D38u;
    // 0x191d3c: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191D38u, 0x191D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D40u;
label_191d40:
    // 0x191d40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191D40u;
    SET_GPR_U32(ctx, 31, 0x191D48u);
    ctx->pc = 0x191D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D40u;
    // 0x191d44: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191D40u, 0x191D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D48u;
label_191d48:
    // 0x191d48: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x191d4c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x191d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x191d50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x191d54: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x191d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x191d58: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x191d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x191d5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191d60: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x191d60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x191d64: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x191D64u;
    SET_GPR_U32(ctx, 31, 0x191D6Cu);
    ctx->pc = 0x191D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D64u;
    // 0x191d68: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x191D64u, 0x191D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D6Cu;
}
