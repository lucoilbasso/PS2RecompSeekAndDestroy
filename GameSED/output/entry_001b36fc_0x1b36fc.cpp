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

// Function: entry_001b36fc
// Address: 0x1b36fc - 0x1b3720
void entry_001b36fc_0x1b36fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b36fc_0x1b36fc");
#endif

    switch (ctx->pc) {
        case 0x1b3708u: goto label_1b3708;
        case 0x1b3718u: goto label_1b3718;
        default: break;
    }

    ctx->pc = 0x1b36fcu;

    // 0x1b36fc: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b36fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b3700: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3700u;
    SET_GPR_U32(ctx, 31, 0x1B3708u);
    ctx->pc = 0x1B3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3700u;
    // 0x1b3704: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3700u, 0x1B3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3708u;
label_1b3708:
    // 0x1b3708: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3708u;
    {
        const bool branch_taken_0x1b3708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3708) {
            ctx->pc = 0x1B3720u;
            return;
        }
    }
    ctx->pc = 0x1B3710u;
    // 0x1b3710: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3710u;
    SET_GPR_U32(ctx, 31, 0x1B3718u);
    ctx->pc = 0x1B3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3710u;
    // 0x1b3714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3710u, 0x1B3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3718u;
label_1b3718:
    // 0x1b3718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3718u;
    {
        const bool branch_taken_0x1b3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3718u;
        // 0x1b371c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3718) {
            ctx->pc = 0x1B3734u;
            return;
        }
    }
    ctx->pc = 0x1B3720u;
}
