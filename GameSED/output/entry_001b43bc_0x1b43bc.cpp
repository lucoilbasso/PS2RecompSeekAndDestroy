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

// Function: entry_001b43bc
// Address: 0x1b43bc - 0x1b43e0
void entry_001b43bc_0x1b43bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b43bc_0x1b43bc");
#endif

    switch (ctx->pc) {
        case 0x1b43c8u: goto label_1b43c8;
        case 0x1b43d8u: goto label_1b43d8;
        default: break;
    }

    ctx->pc = 0x1b43bcu;

    // 0x1b43bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b43c0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B43C0u;
    SET_GPR_U32(ctx, 31, 0x1B43C8u);
    ctx->pc = 0x1B43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43C0u;
    // 0x1b43c4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B43C0u, 0x1B43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43C8u;
label_1b43c8:
    // 0x1b43c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B43C8u;
    {
        const bool branch_taken_0x1b43c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b43c8) {
            ctx->pc = 0x1B43E0u;
            return;
        }
    }
    ctx->pc = 0x1B43D0u;
    // 0x1b43d0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B43D0u;
    SET_GPR_U32(ctx, 31, 0x1B43D8u);
    ctx->pc = 0x1B43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D0u;
    // 0x1b43d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B43D0u, 0x1B43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43D8u;
label_1b43d8:
    // 0x1b43d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B43D8u;
    {
        const bool branch_taken_0x1b43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D8u;
        // 0x1b43dc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43d8) {
            ctx->pc = 0x1B43F4u;
            return;
        }
    }
    ctx->pc = 0x1B43E0u;
}
