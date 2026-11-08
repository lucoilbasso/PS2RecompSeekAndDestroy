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

// Function: entry_001d6cc4
// Address: 0x1d6cc4 - 0x1d6ce8
void entry_001d6cc4_0x1d6cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6cc4_0x1d6cc4");
#endif

    switch (ctx->pc) {
        case 0x1d6cccu: goto label_1d6ccc;
        default: break;
    }

    ctx->pc = 0x1d6cc4u;

    // 0x1d6cc4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6CC4u;
    SET_GPR_U32(ctx, 31, 0x1D6CCCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6CC4u, 0x1D6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CCCu;
label_1d6ccc:
    // 0x1d6ccc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6CCCu;
    {
        const bool branch_taken_0x1d6ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CCCu;
        // 0x1d6cd0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ccc) {
            ctx->pc = 0x1D6CE8u;
            return;
        }
    }
    ctx->pc = 0x1D6CD4u;
    // 0x1d6cd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d6cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cdc: 0x24a51950  addiu       $a1, $a1, 0x1950
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6480));
    // 0x1d6ce0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6CE0u;
    SET_GPR_U32(ctx, 31, 0x1D6CE8u);
    ctx->pc = 0x1D6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE0u;
    // 0x1d6ce4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6CE0u, 0x1D6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CE8u;
}
