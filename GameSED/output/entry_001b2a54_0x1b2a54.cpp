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

// Function: entry_001b2a54
// Address: 0x1b2a54 - 0x1b2a78
void entry_001b2a54_0x1b2a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a54_0x1b2a54");
#endif

    switch (ctx->pc) {
        case 0x1b2a60u: goto label_1b2a60;
        case 0x1b2a70u: goto label_1b2a70;
        default: break;
    }

    ctx->pc = 0x1b2a54u;

    // 0x1b2a54: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b2a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b2a58: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2A58u;
    SET_GPR_U32(ctx, 31, 0x1B2A60u);
    ctx->pc = 0x1B2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A58u;
    // 0x1b2a5c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2A58u, 0x1B2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A60u;
label_1b2a60:
    // 0x1b2a60: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A60u;
    {
        const bool branch_taken_0x1b2a60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a60) {
            ctx->pc = 0x1B2A78u;
            return;
        }
    }
    ctx->pc = 0x1B2A68u;
    // 0x1b2a68: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2A68u;
    SET_GPR_U32(ctx, 31, 0x1B2A70u);
    ctx->pc = 0x1B2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A68u;
    // 0x1b2a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2A68u, 0x1B2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A70u;
label_1b2a70:
    // 0x1b2a70: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B2A70u;
    {
        const bool branch_taken_0x1b2a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A70u;
        // 0x1b2a74: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a70) {
            ctx->pc = 0x1B2ADCu;
            return;
        }
    }
    ctx->pc = 0x1B2A78u;
}
