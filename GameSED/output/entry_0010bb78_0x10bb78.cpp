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

// Function: entry_0010bb78
// Address: 0x10bb78 - 0x10bbb0
void entry_0010bb78_0x10bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb78_0x10bb78");
#endif

    switch (ctx->pc) {
        case 0x10bb80u: goto label_10bb80;
        case 0x10bb88u: goto label_10bb88;
        case 0x10bbacu: goto label_10bbac;
        default: break;
    }

    ctx->pc = 0x10bb78u;

    // 0x10bb78: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10BB78u;
    SET_GPR_U32(ctx, 31, 0x10BB80u);
    ctx->pc = 0x10BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB78u;
    // 0x10bb7c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10BB78u, 0x10BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB80u;
label_10bb80:
    // 0x10bb80: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10BB80u;
    SET_GPR_U32(ctx, 31, 0x10BB88u);
    ctx->pc = 0x10BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB80u;
    // 0x10bb84: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10BB80u, 0x10BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB88u;
label_10bb88:
    // 0x10bb88: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x10bb8c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x10bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x10bb90: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x10bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10bb94: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x10bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10bb98: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x10bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x10bb9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10bb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10bba0: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x10bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x10bba4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10BBA4u;
    SET_GPR_U32(ctx, 31, 0x10BBACu);
    ctx->pc = 0x10BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBA4u;
    // 0x10bba8: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10BBA4u, 0x10BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBACu;
label_10bbac:
    // 0x10bbac: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x10bbacu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10bbb0u;
}
