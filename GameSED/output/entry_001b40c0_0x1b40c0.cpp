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

// Function: entry_001b40c0
// Address: 0x1b40c0 - 0x1b40e4
void entry_001b40c0_0x1b40c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b40c0_0x1b40c0");
#endif

    switch (ctx->pc) {
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b40d0u: goto label_1b40d0;
        default: break;
    }

    ctx->pc = 0x1b40c0u;

    // 0x1b40c0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B40C0u;
    SET_GPR_U32(ctx, 31, 0x1B40C8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B40C0u, 0x1B40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40C8u;
label_1b40c8:
    // 0x1b40c8: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x1B40C8u;
    SET_GPR_U32(ctx, 31, 0x1B40D0u);
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x1B40C8u, 0x1B40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40D0u;
label_1b40d0:
    // 0x1b40d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b40d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B40D4u;
    {
        const bool branch_taken_0x1b40d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40D4u;
        // 0x1b40d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40d4) {
            ctx->pc = 0x1B40E4u;
            return;
        }
    }
    ctx->pc = 0x1B40DCu;
    // 0x1b40dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B40DCu;
    {
        const bool branch_taken_0x1b40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40DCu;
        // 0x1b40e0: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40dc) {
            ctx->pc = 0x1B4138u;
            return;
        }
    }
    ctx->pc = 0x1B40E4u;
}
