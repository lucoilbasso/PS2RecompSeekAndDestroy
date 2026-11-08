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

// Function: entry_001c9b80
// Address: 0x1c9b80 - 0x1c9ba4
void entry_001c9b80_0x1c9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9b80_0x1c9b80");
#endif

    switch (ctx->pc) {
        case 0x1c9b94u: goto label_1c9b94;
        default: break;
    }

    ctx->pc = 0x1c9b80u;

label_1c9b80:
    // 0x1c9b80: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1c9b84:
    // 0x1c9b84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c9b88:
    // 0x1c9b88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9b8c:
    // 0x1c9b8c: 0x60f809  jalr        $v1
label_1c9b90:
    if (ctx->pc == 0x1C9B90u) {
        ctx->pc = 0x1C9B94u;
        goto label_1c9b94;
    }
    ctx->pc = 0x1C9B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C9B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B8Cu, 0x1C9B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B94u;
label_1c9b94:
    // 0x1c9b94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9b98:
    // 0x1c9b98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9b9c:
    // 0x1c9b9c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1c9ba0:
    if (ctx->pc == 0x1C9BA0u) {
        ctx->pc = 0x1C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B9Cu;
        // 0x1c9ba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9BA4u;
        goto label_fallthrough_0x1c9b9c;
    }
    ctx->pc = 0x1C9B9Cu;
    {
        const bool branch_taken_0x1c9b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b9c) {
            ctx->pc = 0x1C9BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9B9Cu;
            // 0x1c9ba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b80;
        }
    }
label_fallthrough_0x1c9b9c:
    ctx->pc = 0x1C9BA4u;
}
