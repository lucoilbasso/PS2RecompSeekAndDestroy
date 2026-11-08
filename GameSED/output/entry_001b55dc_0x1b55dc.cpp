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

// Function: entry_001b55dc
// Address: 0x1b55dc - 0x1b5600
void entry_001b55dc_0x1b55dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b55dc_0x1b55dc");
#endif

    switch (ctx->pc) {
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55f8u: goto label_1b55f8;
        default: break;
    }

    ctx->pc = 0x1b55dcu;

    // 0x1b55dc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b55dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b55e0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B55E0u;
    SET_GPR_U32(ctx, 31, 0x1B55E8u);
    ctx->pc = 0x1B55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55E0u;
    // 0x1b55e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B55E0u, 0x1B55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55E8u;
label_1b55e8:
    // 0x1b55e8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B55E8u;
    {
        const bool branch_taken_0x1b55e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55e8) {
            ctx->pc = 0x1B5600u;
            return;
        }
    }
    ctx->pc = 0x1B55F0u;
    // 0x1b55f0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B55F0u;
    SET_GPR_U32(ctx, 31, 0x1B55F8u);
    ctx->pc = 0x1B55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55F0u;
    // 0x1b55f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B55F0u, 0x1B55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55F8u;
label_1b55f8:
    // 0x1b55f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B55F8u;
    {
        const bool branch_taken_0x1b55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55F8u;
        // 0x1b55fc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55f8) {
            ctx->pc = 0x1B5614u;
            return;
        }
    }
    ctx->pc = 0x1B5600u;
}
