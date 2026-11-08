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

// Function: entry_001a514c
// Address: 0x1a514c - 0x1a5154
void entry_001a514c_0x1a514c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a514c_0x1a514c");
#endif

    ctx->pc = 0x1a514cu;

label_1a514c:
    // 0x1a514c: 0x40f809  jalr        $v0
label_1a5150:
    if (ctx->pc == 0x1A5150u) {
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5154u;
        goto label_fallthrough_0x1a514c;
    }
    ctx->pc = 0x1A514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5154u);
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A514Cu, 0x1A5154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a514c:
    ctx->pc = 0x1A5154u;
}
