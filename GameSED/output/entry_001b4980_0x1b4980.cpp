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

// Function: entry_001b4980
// Address: 0x1b4980 - 0x1b49a4
void entry_001b4980_0x1b4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4980_0x1b4980");
#endif

    switch (ctx->pc) {
        case 0x1b498cu: goto label_1b498c;
        case 0x1b499cu: goto label_1b499c;
        default: break;
    }

    ctx->pc = 0x1b4980u;

    // 0x1b4980: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b4980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b4984: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4984u;
    SET_GPR_U32(ctx, 31, 0x1B498Cu);
    ctx->pc = 0x1B4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4984u;
    // 0x1b4988: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4984u, 0x1B498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B498Cu;
label_1b498c:
    // 0x1b498c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B498Cu;
    {
        const bool branch_taken_0x1b498c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b498c) {
            ctx->pc = 0x1B49A4u;
            return;
        }
    }
    ctx->pc = 0x1B4994u;
    // 0x1b4994: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4994u;
    SET_GPR_U32(ctx, 31, 0x1B499Cu);
    ctx->pc = 0x1B4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4994u;
    // 0x1b4998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4994u, 0x1B499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B499Cu;
label_1b499c:
    // 0x1b499c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B499Cu;
    {
        const bool branch_taken_0x1b499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B499Cu;
        // 0x1b49a0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b499c) {
            ctx->pc = 0x1B49B8u;
            return;
        }
    }
    ctx->pc = 0x1B49A4u;
}
