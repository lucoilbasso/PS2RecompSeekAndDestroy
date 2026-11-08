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

// Function: entry_0010f840
// Address: 0x10f840 - 0x10f860
void entry_0010f840_0x10f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f840_0x10f840");
#endif

    switch (ctx->pc) {
        case 0x10f854u: goto label_10f854;
        default: break;
    }

    ctx->pc = 0x10f840u;

    // 0x10f840: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F840u;
    {
        const bool branch_taken_0x10f840 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x10F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F840u;
        // 0x10f844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f840) {
            ctx->pc = 0x10F860u;
            return;
        }
    }
    ctx->pc = 0x10F848u;
    // 0x10f848: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f84c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F84Cu;
    SET_GPR_U32(ctx, 31, 0x10F854u);
    ctx->pc = 0x10F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F84Cu;
    // 0x10f850: 0x2484d180  addiu       $a0, $a0, -0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F84Cu, 0x10F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F854u;
label_10f854:
    // 0x10f854: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F854u;
    {
        const bool branch_taken_0x10f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f854) {
            ctx->pc = 0x10F870u;
            return;
        }
    }
    ctx->pc = 0x10F85Cu;
    // 0x10f85c: 0x0  nop
    ctx->pc = 0x10f85cu;
    // NOP
    ctx->pc = 0x10f860u;
}
