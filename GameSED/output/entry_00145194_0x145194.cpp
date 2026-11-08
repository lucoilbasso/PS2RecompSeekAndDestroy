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

// Function: entry_00145194
// Address: 0x145194 - 0x1451b4
void entry_00145194_0x145194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145194_0x145194");
#endif

    switch (ctx->pc) {
        case 0x14519cu: goto label_14519c;
        case 0x1451a4u: goto label_1451a4;
        default: break;
    }

    ctx->pc = 0x145194u;

    // 0x145194: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x145194u;
    SET_GPR_U32(ctx, 31, 0x14519Cu);
    ctx->pc = 0x145198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145194u;
    // 0x145198: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x145194u, 0x14519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14519Cu;
label_14519c:
    // 0x14519c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x14519Cu;
    SET_GPR_U32(ctx, 31, 0x1451A4u);
    ctx->pc = 0x1451A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14519Cu;
    // 0x1451a0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14519Cu, 0x1451A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451A4u;
label_1451a4:
    // 0x1451a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1451a8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1451a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1451ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1451acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1451b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1451b4u;
}
