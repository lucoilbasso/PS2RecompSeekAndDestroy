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

// Function: entry_0010e7c4
// Address: 0x10e7c4 - 0x10e7e8
void entry_0010e7c4_0x10e7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e7c4_0x10e7c4");
#endif

    switch (ctx->pc) {
        case 0x10e7d8u: goto label_10e7d8;
        case 0x10e7e0u: goto label_10e7e0;
        default: break;
    }

    ctx->pc = 0x10e7c4u;

    // 0x10e7c4: 0x8e1001b8  lw          $s0, 0x1B8($s0)
    ctx->pc = 0x10e7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x10e7c8: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x10e7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10e7cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10e7d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10E7D0u;
    SET_GPR_U32(ctx, 31, 0x10E7D8u);
    ctx->pc = 0x10E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7D0u;
    // 0x10e7d4: 0x118980  sll         $s1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10E7D0u, 0x10E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7D8u;
label_10e7d8:
    // 0x10e7d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10E7D8u;
    SET_GPR_U32(ctx, 31, 0x10E7E0u);
    ctx->pc = 0x10E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7D8u;
    // 0x10e7dc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10E7D8u, 0x10E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E7E0u;
label_10e7e0:
    // 0x10e7e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10e7e4: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x10e7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x10e7e8u;
}
