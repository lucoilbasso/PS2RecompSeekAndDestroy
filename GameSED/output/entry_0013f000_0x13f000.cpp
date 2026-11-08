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

// Function: entry_0013f000
// Address: 0x13f000 - 0x13f01c
void entry_0013f000_0x13f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f000_0x13f000");
#endif

    switch (ctx->pc) {
        case 0x13f00cu: goto label_13f00c;
        default: break;
    }

    ctx->pc = 0x13f000u;

label_13f000:
    // 0x13f000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f004: 0xc050680  jal         func_141A00
    ctx->pc = 0x13F004u;
    SET_GPR_U32(ctx, 31, 0x13F00Cu);
    ctx->pc = 0x13F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F004u;
    // 0x13f008: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x13F004u, 0x13F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F00Cu;
label_13f00c:
    // 0x13f00c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F00Cu;
    {
        const bool branch_taken_0x13f00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F00Cu;
        // 0x13f010: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f00c) {
            ctx->pc = 0x13F020u;
            return;
        }
    }
    ctx->pc = 0x13F014u;
    // 0x13f014: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F014u;
    {
        const bool branch_taken_0x13f014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F014u;
        // 0x13f018: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f014) {
            ctx->pc = 0x13F000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f000;
        }
    }
    ctx->pc = 0x13F01Cu;
}
