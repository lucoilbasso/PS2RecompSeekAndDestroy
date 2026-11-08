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

// Function: entry_0012eb60
// Address: 0x12eb60 - 0x12eb98
void entry_0012eb60_0x12eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb60_0x12eb60");
#endif

    switch (ctx->pc) {
        case 0x12eb80u: goto label_12eb80;
        case 0x12eb88u: goto label_12eb88;
        default: break;
    }

    ctx->pc = 0x12eb60u;

    // 0x12eb60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12eb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12eb68: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x12eb6c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x12eb70: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x12eb74: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x12eb78: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12EB78u;
    SET_GPR_U32(ctx, 31, 0x12EB80u);
    ctx->pc = 0x12EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB78u;
    // 0x12eb7c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12EB78u, 0x12EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB80u;
label_12eb80:
    // 0x12eb80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12EB80u;
    SET_GPR_U32(ctx, 31, 0x12EB88u);
    ctx->pc = 0x12EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB80u;
    // 0x12eb84: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12EB80u, 0x12EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB88u;
label_12eb88:
    // 0x12eb88: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12eb8c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12eb90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12eb94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x12eb98u;
}
