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

// Function: entry_001b9754
// Address: 0x1b9754 - 0x1b9778
void entry_001b9754_0x1b9754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9754_0x1b9754");
#endif

    switch (ctx->pc) {
        case 0x1b9770u: goto label_1b9770;
        default: break;
    }

    ctx->pc = 0x1b9754u;

    // 0x1b9754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9758: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9758u;
    {
        const bool branch_taken_0x1b9758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9758u;
        // 0x1b975c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9758) {
            ctx->pc = 0x1B9778u;
            return;
        }
    }
    ctx->pc = 0x1B9760u;
    // 0x1b9760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9768: 0xc06e436  jal         func_1B90D8
    ctx->pc = 0x1B9768u;
    SET_GPR_U32(ctx, 31, 0x1B9770u);
    ctx->pc = 0x1B976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9768u;
    // 0x1b976c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B90D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B90D8u, 0x1B9768u, 0x1B9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9770u;
label_1b9770:
    // 0x1b9770: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b9774: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b9774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9778u;
}
