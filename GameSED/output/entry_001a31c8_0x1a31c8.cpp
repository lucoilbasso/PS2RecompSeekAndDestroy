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

// Function: entry_001a31c8
// Address: 0x1a31c8 - 0x1a31e0
void entry_001a31c8_0x1a31c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a31c8_0x1a31c8");
#endif

    switch (ctx->pc) {
        case 0x1a31d8u: goto label_1a31d8;
        default: break;
    }

    ctx->pc = 0x1a31c8u;

label_1a31c8:
    // 0x1a31c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a31cc:
    if (ctx->pc == 0x1A31CCu) {
        ctx->pc = 0x1A31D0u;
        goto label_1a31d0;
    }
    ctx->pc = 0x1A31C8u;
    {
        const bool branch_taken_0x1a31c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a31c8) {
            ctx->pc = 0x1A31E8u;
            return;
        }
    }
    ctx->pc = 0x1A31D0u;
label_1a31d0:
    // 0x1a31d0: 0x40f809  jalr        $v0
label_1a31d4:
    if (ctx->pc == 0x1A31D4u) {
        ctx->pc = 0x1A31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31D0u;
        // 0x1a31d4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31D8u;
        goto label_1a31d8;
    }
    ctx->pc = 0x1A31D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A31D8u);
        ctx->pc = 0x1A31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31D0u;
        // 0x1a31d4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31D0u, 0x1A31D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A31D8u;
label_1a31d8:
    // 0x1a31d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a31dc:
    if (ctx->pc == 0x1A31DCu) {
        ctx->pc = 0x1A31E0u;
        goto label_fallthrough_0x1a31d8;
    }
    ctx->pc = 0x1A31D8u;
    {
        const bool branch_taken_0x1a31d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a31d8) {
            ctx->pc = 0x1A31E8u;
            return;
        }
    }
label_fallthrough_0x1a31d8:
    ctx->pc = 0x1A31E0u;
}
