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

// Function: caseD_5
// Address: 0x111668 - 0x111688
void caseD_5_0x111668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x111668");
#endif

    switch (ctx->pc) {
        case 0x111674u: goto label_111674;
        default: break;
    }

    ctx->pc = 0x111668u;

    // 0x111668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11166c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11166Cu;
    SET_GPR_U32(ctx, 31, 0x111674u);
    ctx->pc = 0x111670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11166Cu;
    // 0x111670: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11166Cu, 0x111674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111674u;
label_111674:
    // 0x111674: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111678: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x111678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11167c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x11167Cu;
    {
        const bool branch_taken_0x11167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11167Cu;
        // 0x111680: 0x8c513630  lw          $s1, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11167c) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111684u;
    // 0x111684: 0x0  nop
    ctx->pc = 0x111684u;
    // NOP
    ctx->pc = 0x111688u;
}
