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

// Function: entry_00192c10
// Address: 0x192c10 - 0x192c44
void entry_00192c10_0x192c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192c10_0x192c10");
#endif

    switch (ctx->pc) {
        case 0x192c18u: goto label_192c18;
        case 0x192c20u: goto label_192c20;
        default: break;
    }

    ctx->pc = 0x192c10u;

    // 0x192c10: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x192C10u;
    SET_GPR_U32(ctx, 31, 0x192C18u);
    ctx->pc = 0x192C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C10u;
    // 0x192c14: 0x8fc40084  lw          $a0, 0x84($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x192C10u, 0x192C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C18u;
label_192c18:
    // 0x192c18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x192C18u;
    SET_GPR_U32(ctx, 31, 0x192C20u);
    ctx->pc = 0x192C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C18u;
    // 0x192c1c: 0x8fc40088  lw          $a0, 0x88($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x192C18u, 0x192C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C20u;
label_192c20:
    // 0x192c20: 0x8fd0008c  lw          $s0, 0x8C($fp)
    ctx->pc = 0x192c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x192c24: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x192c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x192c28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192c2c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x192c30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192c34: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x192c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x192c38: 0xafc5008c  sw          $a1, 0x8C($fp)
    ctx->pc = 0x192c38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 5));
    // 0x192c3c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x192C3Cu;
    SET_GPR_U32(ctx, 31, 0x192C44u);
    ctx->pc = 0x192C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C3Cu;
    // 0x192c40: 0xafc20080  sw          $v0, 0x80($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x192C3Cu, 0x192C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C44u;
}
