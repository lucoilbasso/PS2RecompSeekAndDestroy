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

// Function: entry_00147748
// Address: 0x147748 - 0x14777c
void entry_00147748_0x147748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147748_0x147748");
#endif

    switch (ctx->pc) {
        case 0x147750u: goto label_147750;
        case 0x147758u: goto label_147758;
        default: break;
    }

    ctx->pc = 0x147748u;

    // 0x147748: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147748u;
    SET_GPR_U32(ctx, 31, 0x147750u);
    ctx->pc = 0x14774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147748u;
    // 0x14774c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147748u, 0x147750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147750u;
label_147750:
    // 0x147750: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147750u;
    SET_GPR_U32(ctx, 31, 0x147758u);
    ctx->pc = 0x147754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147750u;
    // 0x147754: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147750u, 0x147758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147758u;
label_147758:
    // 0x147758: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x147758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x14775c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x14775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x147760: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x147760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x147764: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x147764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x147768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x147768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14776c: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x147770: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x147770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x147774: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x147774u;
    SET_GPR_U32(ctx, 31, 0x14777Cu);
    ctx->pc = 0x147778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147774u;
    // 0x147778: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x147774u, 0x14777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14777Cu;
}
