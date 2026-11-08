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

// Function: entry_001ccee8
// Address: 0x1ccee8 - 0x1ccf10
void entry_001ccee8_0x1ccee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccee8_0x1ccee8");
#endif

    switch (ctx->pc) {
        case 0x1ccef0u: goto label_1ccef0;
        default: break;
    }

    ctx->pc = 0x1ccee8u;

    // 0x1ccee8: 0xc07873a  jal         func_1E1CE8
    ctx->pc = 0x1CCEE8u;
    SET_GPR_U32(ctx, 31, 0x1CCEF0u);
    ctx->pc = 0x1E1CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1CE8u, 0x1CCEE8u, 0x1CCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF0u;
label_1ccef0:
    // 0x1ccef0: 0x1a80001d  blez        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CCEF0u;
    {
        const bool branch_taken_0x1ccef0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1CCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF0u;
        // 0x1ccef4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccef0) {
            ctx->pc = 0x1CCF68u;
            return;
        }
    }
    ctx->pc = 0x1CCEF8u;
    // 0x1ccef8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ccefc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ccefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf00: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1ccf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf04: 0x3c14001e  lui         $s4, 0x1E
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)30 << 16));
    // 0x1ccf08: 0x24550cd0  addiu       $s5, $v0, 0xCD0
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3280));
    // 0x1ccf0c: 0x0  nop
    ctx->pc = 0x1ccf0cu;
    // NOP
    ctx->pc = 0x1ccf10u;
}
