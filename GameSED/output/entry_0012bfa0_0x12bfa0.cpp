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

// Function: entry_0012bfa0
// Address: 0x12bfa0 - 0x12bfb8
void entry_0012bfa0_0x12bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bfa0_0x12bfa0");
#endif

    switch (ctx->pc) {
        case 0x12bfa8u: goto label_12bfa8;
        default: break;
    }

    ctx->pc = 0x12bfa0u;

label_12bfa0:
    // 0x12bfa0: 0xc04901c  jal         func_124070
    ctx->pc = 0x12BFA0u;
    SET_GPR_U32(ctx, 31, 0x12BFA8u);
    ctx->pc = 0x12BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFA0u;
    // 0x12bfa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124070u, 0x12BFA0u, 0x12BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFA8u;
label_12bfa8:
    // 0x12bfa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfac: 0x54a0fffc  bnel        $a1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12BFACu;
    {
        const bool branch_taken_0x12bfac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bfac) {
            ctx->pc = 0x12BFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BFACu;
            // 0x12bfb0: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfa0;
        }
    }
    ctx->pc = 0x12BFB4u;
    // 0x12bfb4: 0x8e240158  lw          $a0, 0x158($s1)
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    ctx->pc = 0x12bfb8u;
}
