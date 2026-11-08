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

// Function: entry_0018abf0
// Address: 0x18abf0 - 0x18ac24
void entry_0018abf0_0x18abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018abf0_0x18abf0");
#endif

    switch (ctx->pc) {
        case 0x18abf8u: goto label_18abf8;
        case 0x18ac00u: goto label_18ac00;
        default: break;
    }

    ctx->pc = 0x18abf0u;

    // 0x18abf0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18ABF0u;
    SET_GPR_U32(ctx, 31, 0x18ABF8u);
    ctx->pc = 0x18ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABF0u;
    // 0x18abf4: 0x8fc40084  lw          $a0, 0x84($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18ABF0u, 0x18ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABF8u;
label_18abf8:
    // 0x18abf8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x18ABF8u;
    SET_GPR_U32(ctx, 31, 0x18AC00u);
    ctx->pc = 0x18ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABF8u;
    // 0x18abfc: 0x8fc40088  lw          $a0, 0x88($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18ABF8u, 0x18AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC00u;
label_18ac00:
    // 0x18ac00: 0x8fd0008c  lw          $s0, 0x8C($fp)
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x18ac04: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x18ac08: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18ac0c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18ac10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18ac14: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x18ac18: 0xafc5008c  sw          $a1, 0x8C($fp)
    ctx->pc = 0x18ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 5));
    // 0x18ac1c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18AC1Cu;
    SET_GPR_U32(ctx, 31, 0x18AC24u);
    ctx->pc = 0x18AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC1Cu;
    // 0x18ac20: 0xafc20080  sw          $v0, 0x80($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18AC1Cu, 0x18AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC24u;
}
