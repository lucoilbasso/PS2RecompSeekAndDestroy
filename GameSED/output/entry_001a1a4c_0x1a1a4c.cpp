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

// Function: entry_001a1a4c
// Address: 0x1a1a4c - 0x1a1a64
void entry_001a1a4c_0x1a1a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a4c_0x1a1a4c");
#endif

    switch (ctx->pc) {
        case 0x1a1a54u: goto label_1a1a54;
        default: break;
    }

    ctx->pc = 0x1a1a4cu;

    // 0x1a1a4c: 0xc06bc9c  jal         func_1AF270
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x1A1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A4Cu;
    // 0x1a1a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF270u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A54u;
    {
        const bool branch_taken_0x1a1a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A54u;
        // 0x1a1a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a54) {
            ctx->pc = 0x1A1A64u;
            return;
        }
    }
    ctx->pc = 0x1A1A5Cu;
    // 0x1a1a5c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A64u);
    ctx->pc = 0x1A1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A5Cu;
    // 0x1a1a60: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A5Cu, 0x1A1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A64u;
}
