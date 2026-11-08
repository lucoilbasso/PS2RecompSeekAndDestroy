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

// Function: entry_00125f58
// Address: 0x125f58 - 0x125f8c
void entry_00125f58_0x125f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125f58_0x125f58");
#endif

    switch (ctx->pc) {
        case 0x125f60u: goto label_125f60;
        case 0x125f68u: goto label_125f68;
        default: break;
    }

    ctx->pc = 0x125f58u;

    // 0x125f58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125F58u;
    SET_GPR_U32(ctx, 31, 0x125F60u);
    ctx->pc = 0x125F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F58u;
    // 0x125f5c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125F58u, 0x125F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F60u;
label_125f60:
    // 0x125f60: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x125F60u;
    SET_GPR_U32(ctx, 31, 0x125F68u);
    ctx->pc = 0x125F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F60u;
    // 0x125f64: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x125F60u, 0x125F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F68u;
label_125f68:
    // 0x125f68: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x125f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x125f6c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x125f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x125f70: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x125f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x125f74: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x125f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x125f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125f7c: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x125f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x125f80: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x125f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x125f84: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x125F84u;
    SET_GPR_U32(ctx, 31, 0x125F8Cu);
    ctx->pc = 0x125F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F84u;
    // 0x125f88: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x125F84u, 0x125F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F8Cu;
}
