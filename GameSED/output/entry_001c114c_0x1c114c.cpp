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

// Function: entry_001c114c
// Address: 0x1c114c - 0x1c1170
void entry_001c114c_0x1c114c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c114c_0x1c114c");
#endif

    switch (ctx->pc) {
        case 0x1c1164u: goto label_1c1164;
        default: break;
    }

    ctx->pc = 0x1c114cu;

    // 0x1c114c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1150: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c1150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1154: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c1154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c1158: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c115c: 0xc070480  jal         func_1C1200
    ctx->pc = 0x1C115Cu;
    SET_GPR_U32(ctx, 31, 0x1C1164u);
    ctx->pc = 0x1C1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C115Cu;
    // 0x1c1160: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1200u, 0x1C115Cu, 0x1C1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1164u;
label_1c1164:
    // 0x1c1164: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1164u;
    {
        const bool branch_taken_0x1c1164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1164u;
        // 0x1c1168: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1164) {
            ctx->pc = 0x1C1198u;
            return;
        }
    }
    ctx->pc = 0x1C116Cu;
    // 0x1c116c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c116cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1c1170u;
}
