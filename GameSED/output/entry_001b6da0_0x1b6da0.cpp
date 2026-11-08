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

// Function: entry_001b6da0
// Address: 0x1b6da0 - 0x1b6dc0
void entry_001b6da0_0x1b6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6da0_0x1b6da0");
#endif

    switch (ctx->pc) {
        case 0x1b6db4u: goto label_1b6db4;
        default: break;
    }

    ctx->pc = 0x1b6da0u;

    // 0x1b6da0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6DA0u;
    {
        const bool branch_taken_0x1b6da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA0u;
        // 0x1b6da4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6da0) {
            ctx->pc = 0x1B6DC0u;
            return;
        }
    }
    ctx->pc = 0x1B6DA8u;
    // 0x1b6da8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1b6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1b6dac: 0xc06db34  jal         func_1B6CD0
    ctx->pc = 0x1B6DACu;
    SET_GPR_U32(ctx, 31, 0x1B6DB4u);
    ctx->pc = 0x1B6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DACu;
    // 0x1b6db0: 0x26a66c90  addiu       $a2, $s5, 0x6C90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 27792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CD0u, 0x1B6DACu, 0x1B6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DB4u;
label_1b6db4:
    // 0x1b6db4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6db8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6DB8u;
    {
        const bool branch_taken_0x1b6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DB8u;
        // 0x1b6dbc: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6db8) {
            ctx->pc = 0x1B6DD8u;
            return;
        }
    }
    ctx->pc = 0x1B6DC0u;
}
