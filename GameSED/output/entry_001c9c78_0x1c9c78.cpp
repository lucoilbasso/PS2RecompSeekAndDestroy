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

// Function: entry_001c9c78
// Address: 0x1c9c78 - 0x1c9c8c
void entry_001c9c78_0x1c9c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c78_0x1c9c78");
#endif

    switch (ctx->pc) {
        case 0x1c9c84u: goto label_1c9c84;
        default: break;
    }

    ctx->pc = 0x1c9c78u;

label_1c9c78:
    // 0x1c9c78: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_1c9c7c:
    // 0x1c9c7c: 0x40f809  jalr        $v0
label_1c9c80:
    if (ctx->pc == 0x1C9C80u) {
        ctx->pc = 0x1C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C7Cu;
        // 0x1c9c80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C84u;
        goto label_1c9c84;
    }
    ctx->pc = 0x1C9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9C84u);
        ctx->pc = 0x1C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C7Cu;
        // 0x1c9c80: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9C7Cu, 0x1C9C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9C84u;
label_1c9c84:
    // 0x1c9c84: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_1c9c88:
    if (ctx->pc == 0x1C9C88u) {
        ctx->pc = 0x1C9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C84u;
        // 0x1c9c88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9C8Cu;
        goto label_fallthrough_0x1c9c84;
    }
    ctx->pc = 0x1C9C84u;
    {
        const bool branch_taken_0x1c9c84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c84) {
            ctx->pc = 0x1C9C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9C84u;
            // 0x1c9c88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9c78;
        }
    }
label_fallthrough_0x1c9c84:
    ctx->pc = 0x1C9C8Cu;
}
