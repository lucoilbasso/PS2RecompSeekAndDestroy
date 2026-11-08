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

// Function: entry_001a2d50
// Address: 0x1a2d50 - 0x1a2d68
void entry_001a2d50_0x1a2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d50_0x1a2d50");
#endif

    switch (ctx->pc) {
        case 0x1a2d60u: goto label_1a2d60;
        default: break;
    }

    ctx->pc = 0x1a2d50u;

label_1a2d50:
    // 0x1a2d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2d54:
    if (ctx->pc == 0x1A2D54u) {
        ctx->pc = 0x1A2D58u;
        goto label_1a2d58;
    }
    ctx->pc = 0x1A2D50u;
    {
        const bool branch_taken_0x1a2d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d50) {
            ctx->pc = 0x1A2D70u;
            return;
        }
    }
    ctx->pc = 0x1A2D58u;
label_1a2d58:
    // 0x1a2d58: 0x40f809  jalr        $v0
label_1a2d5c:
    if (ctx->pc == 0x1A2D5Cu) {
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D58u;
        // 0x1a2d5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D60u;
        goto label_1a2d60;
    }
    ctx->pc = 0x1A2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2D60u);
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D58u;
        // 0x1a2d5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D58u, 0x1A2D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2D60u;
label_1a2d60:
    // 0x1a2d60: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a2d64:
    if (ctx->pc == 0x1A2D64u) {
        ctx->pc = 0x1A2D68u;
        goto label_fallthrough_0x1a2d60;
    }
    ctx->pc = 0x1A2D60u;
    {
        const bool branch_taken_0x1a2d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d60) {
            ctx->pc = 0x1A2D70u;
            return;
        }
    }
label_fallthrough_0x1a2d60:
    ctx->pc = 0x1A2D68u;
}
