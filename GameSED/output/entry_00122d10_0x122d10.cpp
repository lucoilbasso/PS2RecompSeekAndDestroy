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

// Function: entry_00122d10
// Address: 0x122d10 - 0x122d44
void entry_00122d10_0x122d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d10_0x122d10");
#endif

    switch (ctx->pc) {
        case 0x122d18u: goto label_122d18;
        case 0x122d20u: goto label_122d20;
        default: break;
    }

    ctx->pc = 0x122d10u;

    // 0x122d10: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122D10u;
    SET_GPR_U32(ctx, 31, 0x122D18u);
    ctx->pc = 0x122D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D10u;
    // 0x122d14: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122D10u, 0x122D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D18u;
label_122d18:
    // 0x122d18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122D18u;
    SET_GPR_U32(ctx, 31, 0x122D20u);
    ctx->pc = 0x122D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D18u;
    // 0x122d1c: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122D18u, 0x122D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D20u;
label_122d20:
    // 0x122d20: 0x8e90008c  lw          $s0, 0x8C($s4)
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x122d24: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x122d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x122d28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x122d2c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x122d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x122d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x122d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x122d34: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x122d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x122d38: 0xae85008c  sw          $a1, 0x8C($s4)
    ctx->pc = 0x122d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 5));
    // 0x122d3c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x122D3Cu;
    SET_GPR_U32(ctx, 31, 0x122D44u);
    ctx->pc = 0x122D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D3Cu;
    // 0x122d40: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x122D3Cu, 0x122D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D44u;
}
