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

// Function: entry_0011b5a0
// Address: 0x11b5a0 - 0x11b5b4
void entry_0011b5a0_0x11b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b5a0_0x11b5a0");
#endif

    switch (ctx->pc) {
        case 0x11b5a8u: goto label_11b5a8;
        default: break;
    }

    ctx->pc = 0x11b5a0u;

label_11b5a0:
    // 0x11b5a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x11B5A0u;
    SET_GPR_U32(ctx, 31, 0x11B5A8u);
    ctx->pc = 0x11B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5A0u;
    // 0x11b5a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x11B5A0u, 0x11B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5A8u;
label_11b5a8:
    // 0x11b5a8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x11b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11b5ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11B5ACu;
    {
        const bool branch_taken_0x11b5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5ACu;
        // 0x11b5b0: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5ac) {
            ctx->pc = 0x11B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b5a0;
        }
    }
    ctx->pc = 0x11B5B4u;
}
