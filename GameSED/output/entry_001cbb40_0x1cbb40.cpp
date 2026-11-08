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

// Function: entry_001cbb40
// Address: 0x1cbb40 - 0x1cbb60
void entry_001cbb40_0x1cbb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb40_0x1cbb40");
#endif

    switch (ctx->pc) {
        case 0x1cbb50u: goto label_1cbb50;
        default: break;
    }

    ctx->pc = 0x1cbb40u;

label_1cbb40:
    // 0x1cbb40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cbb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb48: 0xc072d98  jal         func_1CB660
    ctx->pc = 0x1CBB48u;
    SET_GPR_U32(ctx, 31, 0x1CBB50u);
    ctx->pc = 0x1CBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB48u;
    // 0x1cbb4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB660u, 0x1CBB48u, 0x1CBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb54: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbb58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CBB58u;
    {
        const bool branch_taken_0x1cbb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB58u;
        // 0x1cbb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb58) {
            ctx->pc = 0x1CBB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbb40;
        }
    }
    ctx->pc = 0x1CBB60u;
}
