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

// Function: entry_001b5418
// Address: 0x1b5418 - 0x1b543c
void entry_001b5418_0x1b5418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5418_0x1b5418");
#endif

    switch (ctx->pc) {
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5434u: goto label_1b5434;
        default: break;
    }

    ctx->pc = 0x1b5418u;

    // 0x1b5418: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b5418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b541c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B541Cu;
    SET_GPR_U32(ctx, 31, 0x1B5424u);
    ctx->pc = 0x1B5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B541Cu;
    // 0x1b5420: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B541Cu, 0x1B5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5424u;
label_1b5424:
    // 0x1b5424: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5424u;
    {
        const bool branch_taken_0x1b5424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5424) {
            ctx->pc = 0x1B543Cu;
            return;
        }
    }
    ctx->pc = 0x1B542Cu;
    // 0x1b542c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B542Cu;
    SET_GPR_U32(ctx, 31, 0x1B5434u);
    ctx->pc = 0x1B5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B542Cu;
    // 0x1b5430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B542Cu, 0x1B5434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5434u;
label_1b5434:
    // 0x1b5434: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5434u;
    {
        const bool branch_taken_0x1b5434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5434u;
        // 0x1b5438: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5434) {
            ctx->pc = 0x1B5450u;
            return;
        }
    }
    ctx->pc = 0x1B543Cu;
}
