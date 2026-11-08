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

// Function: caseD_7
// Address: 0x154b88 - 0x154ba8
void caseD_7_0x154b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x154b88");
#endif

    switch (ctx->pc) {
        case 0x154b90u: goto label_154b90;
        default: break;
    }

    ctx->pc = 0x154b88u;

    // 0x154b88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154B88u;
    SET_GPR_U32(ctx, 31, 0x154B90u);
    ctx->pc = 0x154B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B88u;
    // 0x154b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154B88u, 0x154B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B90u;
label_154b90:
    // 0x154b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154B90u;
    {
        const bool branch_taken_0x154b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b90) {
            ctx->pc = 0x154BA8u;
            return;
        }
    }
    ctx->pc = 0x154B98u;
    // 0x154b98: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x154b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x154b9c: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B9Cu;
        // 0x154ba0: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154BA4u;
    // 0x154ba4: 0x0  nop
    ctx->pc = 0x154ba4u;
    // NOP
    ctx->pc = 0x154ba8u;
}
