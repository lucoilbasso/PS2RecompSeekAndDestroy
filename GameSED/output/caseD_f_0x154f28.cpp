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

// Function: caseD_f
// Address: 0x154f28 - 0x154f48
void caseD_f_0x154f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x154f28");
#endif

    switch (ctx->pc) {
        case 0x154f30u: goto label_154f30;
        default: break;
    }

    ctx->pc = 0x154f28u;

    // 0x154f28: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154F28u;
    SET_GPR_U32(ctx, 31, 0x154F30u);
    ctx->pc = 0x154F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F28u;
    // 0x154f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154F28u, 0x154F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F30u;
label_154f30:
    // 0x154f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154F30u;
    {
        const bool branch_taken_0x154f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f30) {
            ctx->pc = 0x154F48u;
            return;
        }
    }
    ctx->pc = 0x154F38u;
    // 0x154f38: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x154f3c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x154F3Cu;
    {
        const bool branch_taken_0x154f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F3Cu;
        // 0x154f40: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f3c) {
            ctx->pc = 0x154F9Cu;
            return;
        }
    }
    ctx->pc = 0x154F44u;
    // 0x154f44: 0x0  nop
    ctx->pc = 0x154f44u;
    // NOP
    ctx->pc = 0x154f48u;
}
