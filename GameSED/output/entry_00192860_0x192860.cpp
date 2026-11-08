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

// Function: entry_00192860
// Address: 0x192860 - 0x192874
void entry_00192860_0x192860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192860_0x192860");
#endif

    switch (ctx->pc) {
        case 0x192868u: goto label_192868;
        default: break;
    }

    ctx->pc = 0x192860u;

label_192860:
    // 0x192860: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x192860u;
    SET_GPR_U32(ctx, 31, 0x192868u);
    ctx->pc = 0x192864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192860u;
    // 0x192864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x192860u, 0x192868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192868u;
label_192868:
    // 0x192868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19286c: 0x5480fffc  bnel        $a0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19286Cu;
    {
        const bool branch_taken_0x19286c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19286c) {
            ctx->pc = 0x192870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19286Cu;
            // 0x192870: 0x8c9007e0  lw          $s0, 0x7E0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192860;
        }
    }
    ctx->pc = 0x192874u;
}
