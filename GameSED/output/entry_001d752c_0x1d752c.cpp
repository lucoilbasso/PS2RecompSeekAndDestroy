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

// Function: entry_001d752c
// Address: 0x1d752c - 0x1d7550
void entry_001d752c_0x1d752c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d752c_0x1d752c");
#endif

    switch (ctx->pc) {
        case 0x1d7534u: goto label_1d7534;
        default: break;
    }

    ctx->pc = 0x1d752cu;

    // 0x1d752c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D752Cu;
    SET_GPR_U32(ctx, 31, 0x1D7534u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D752Cu, 0x1D7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7534u;
label_1d7534:
    // 0x1d7534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7534u;
    {
        const bool branch_taken_0x1d7534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7534u;
        // 0x1d7538: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7534) {
            ctx->pc = 0x1D7550u;
            return;
        }
    }
    ctx->pc = 0x1D753Cu;
    // 0x1d753c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d753cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7544: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
    // 0x1d7548: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D7548u;
    SET_GPR_U32(ctx, 31, 0x1D7550u);
    ctx->pc = 0x1D754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7548u;
    // 0x1d754c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D7548u, 0x1D7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7550u;
}
