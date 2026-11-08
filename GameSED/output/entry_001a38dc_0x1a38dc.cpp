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

// Function: entry_001a38dc
// Address: 0x1a38dc - 0x1a38f8
void entry_001a38dc_0x1a38dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a38dc_0x1a38dc");
#endif

    switch (ctx->pc) {
        case 0x1a38ecu: goto label_1a38ec;
        default: break;
    }

    ctx->pc = 0x1a38dcu;

label_1a38dc:
    // 0x1a38dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a38e0:
    if (ctx->pc == 0x1A38E0u) {
        ctx->pc = 0x1A38E4u;
        goto label_1a38e4;
    }
    ctx->pc = 0x1A38DCu;
    {
        const bool branch_taken_0x1a38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38dc) {
            ctx->pc = 0x1A3900u;
            return;
        }
    }
    ctx->pc = 0x1A38E4u;
label_1a38e4:
    // 0x1a38e4: 0x40f809  jalr        $v0
label_1a38e8:
    if (ctx->pc == 0x1A38E8u) {
        ctx->pc = 0x1A38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38E4u;
        // 0x1a38e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38ECu;
        goto label_1a38ec;
    }
    ctx->pc = 0x1A38E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A38ECu);
        ctx->pc = 0x1A38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38E4u;
        // 0x1a38e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A38E4u, 0x1A38ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A38ECu;
label_1a38ec:
    // 0x1a38ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a38f0:
    if (ctx->pc == 0x1A38F0u) {
        ctx->pc = 0x1A38F4u;
        goto label_1a38f4;
    }
    ctx->pc = 0x1A38ECu;
    {
        const bool branch_taken_0x1a38ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38ec) {
            ctx->pc = 0x1A3900u;
            return;
        }
    }
    ctx->pc = 0x1A38F4u;
label_1a38f4:
    // 0x1a38f4: 0x0  nop
    ctx->pc = 0x1a38f4u;
    // NOP
    ctx->pc = 0x1a38f8u;
}
