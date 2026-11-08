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

// Function: entry_001b38d8
// Address: 0x1b38d8 - 0x1b38fc
void entry_001b38d8_0x1b38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b38d8_0x1b38d8");
#endif

    switch (ctx->pc) {
        case 0x1b38e4u: goto label_1b38e4;
        case 0x1b38f4u: goto label_1b38f4;
        default: break;
    }

    ctx->pc = 0x1b38d8u;

    // 0x1b38d8: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b38d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1b38dc: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B38DCu;
    SET_GPR_U32(ctx, 31, 0x1B38E4u);
    ctx->pc = 0x1B38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38DCu;
    // 0x1b38e0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B38DCu, 0x1B38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38E4u;
label_1b38e4:
    // 0x1b38e4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B38E4u;
    {
        const bool branch_taken_0x1b38e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b38e4) {
            ctx->pc = 0x1B38FCu;
            return;
        }
    }
    ctx->pc = 0x1B38ECu;
    // 0x1b38ec: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B38ECu;
    SET_GPR_U32(ctx, 31, 0x1B38F4u);
    ctx->pc = 0x1B38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38ECu;
    // 0x1b38f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B38ECu, 0x1B38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38F4u;
label_1b38f4:
    // 0x1b38f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B38F4u;
    {
        const bool branch_taken_0x1b38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38F4u;
        // 0x1b38f8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38f4) {
            ctx->pc = 0x1B3910u;
            return;
        }
    }
    ctx->pc = 0x1B38FCu;
}
