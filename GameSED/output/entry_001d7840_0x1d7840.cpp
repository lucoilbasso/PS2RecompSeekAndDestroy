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

// Function: entry_001d7840
// Address: 0x1d7840 - 0x1d7860
void entry_001d7840_0x1d7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7840_0x1d7840");
#endif

    switch (ctx->pc) {
        case 0x1d7858u: goto label_1d7858;
        default: break;
    }

    ctx->pc = 0x1d7840u;

    // 0x1d7840: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7840u;
    {
        const bool branch_taken_0x1d7840 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7840u;
        // 0x1d7844: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7840) {
            ctx->pc = 0x1D7860u;
            return;
        }
    }
    ctx->pc = 0x1D7848u;
    // 0x1d7848: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1d7848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1d784c: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1d784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x1d7850: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1D7850u;
    SET_GPR_U32(ctx, 31, 0x1D7858u);
    ctx->pc = 0x1D7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7850u;
    // 0x1d7854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1D7850u, 0x1D7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7858u;
label_1d7858:
    // 0x1d7858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7858u;
    {
        const bool branch_taken_0x1d7858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7858u;
        // 0x1d785c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7858) {
            ctx->pc = 0x1D7868u;
            return;
        }
    }
    ctx->pc = 0x1D7860u;
}
