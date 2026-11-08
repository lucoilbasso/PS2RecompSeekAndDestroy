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

// Function: entry_001a33c0
// Address: 0x1a33c0 - 0x1a33d8
void entry_001a33c0_0x1a33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a33c0_0x1a33c0");
#endif

    switch (ctx->pc) {
        case 0x1a33d0u: goto label_1a33d0;
        default: break;
    }

    ctx->pc = 0x1a33c0u;

label_1a33c0:
    // 0x1a33c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a33c4:
    if (ctx->pc == 0x1A33C4u) {
        ctx->pc = 0x1A33C8u;
        goto label_1a33c8;
    }
    ctx->pc = 0x1A33C0u;
    {
        const bool branch_taken_0x1a33c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a33c0) {
            ctx->pc = 0x1A33E0u;
            return;
        }
    }
    ctx->pc = 0x1A33C8u;
label_1a33c8:
    // 0x1a33c8: 0x40f809  jalr        $v0
label_1a33cc:
    if (ctx->pc == 0x1A33CCu) {
        ctx->pc = 0x1A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C8u;
        // 0x1a33cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A33D0u;
        goto label_1a33d0;
    }
    ctx->pc = 0x1A33C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A33D0u);
        ctx->pc = 0x1A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C8u;
        // 0x1a33cc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33C8u, 0x1A33D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A33D0u;
label_1a33d0:
    // 0x1a33d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a33d4:
    if (ctx->pc == 0x1A33D4u) {
        ctx->pc = 0x1A33D8u;
        goto label_fallthrough_0x1a33d0;
    }
    ctx->pc = 0x1A33D0u;
    {
        const bool branch_taken_0x1a33d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a33d0) {
            ctx->pc = 0x1A33E0u;
            return;
        }
    }
label_fallthrough_0x1a33d0:
    ctx->pc = 0x1A33D8u;
}
