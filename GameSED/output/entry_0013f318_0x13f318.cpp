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

// Function: entry_0013f318
// Address: 0x13f318 - 0x13f334
void entry_0013f318_0x13f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f318_0x13f318");
#endif

    switch (ctx->pc) {
        case 0x13f324u: goto label_13f324;
        default: break;
    }

    ctx->pc = 0x13f318u;

label_13f318:
    // 0x13f318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f31c: 0xc050680  jal         func_141A00
    ctx->pc = 0x13F31Cu;
    SET_GPR_U32(ctx, 31, 0x13F324u);
    ctx->pc = 0x13F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F31Cu;
    // 0x13f320: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x13F31Cu, 0x13F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F324u;
label_13f324:
    // 0x13f324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F324u;
    {
        const bool branch_taken_0x13f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F324u;
        // 0x13f328: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f324) {
            ctx->pc = 0x13F338u;
            return;
        }
    }
    ctx->pc = 0x13F32Cu;
    // 0x13f32c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F32Cu;
    {
        const bool branch_taken_0x13f32c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F32Cu;
        // 0x13f330: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f32c) {
            ctx->pc = 0x13F318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f318;
        }
    }
    ctx->pc = 0x13F334u;
}
