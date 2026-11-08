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

// Function: entry_0011b238
// Address: 0x11b238 - 0x11b24c
void entry_0011b238_0x11b238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b238_0x11b238");
#endif

    switch (ctx->pc) {
        case 0x11b240u: goto label_11b240;
        default: break;
    }

    ctx->pc = 0x11b238u;

label_11b238:
    // 0x11b238: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x11B238u;
    SET_GPR_U32(ctx, 31, 0x11B240u);
    ctx->pc = 0x11B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B238u;
    // 0x11b23c: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x11B238u, 0x11B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B240u;
label_11b240:
    // 0x11b240: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x11b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11b244: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x11B244u;
    {
        const bool branch_taken_0x11b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B244u;
        // 0x11b248: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b244) {
            ctx->pc = 0x11B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b238;
        }
    }
    ctx->pc = 0x11B24Cu;
}
