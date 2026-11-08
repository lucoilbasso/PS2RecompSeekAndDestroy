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

// Function: caseD_0
// Address: 0x1349d8 - 0x1349f0
void caseD_0_0x1349d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1349d8");
#endif

    switch (ctx->pc) {
        case 0x1349e4u: goto label_1349e4;
        default: break;
    }

    ctx->pc = 0x1349d8u;

    // 0x1349d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1349d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349dc: 0xc04eab8  jal         func_13AAE0
    ctx->pc = 0x1349DCu;
    SET_GPR_U32(ctx, 31, 0x1349E4u);
    ctx->pc = 0x1349E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349DCu;
    // 0x1349e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x1349DCu, 0x1349E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349E4u;
label_1349e4:
    // 0x1349e4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1349E4u;
    {
        const bool branch_taken_0x1349e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349E4u;
        // 0x1349e8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349e4) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x1349ECu;
    // 0x1349ec: 0x0  nop
    ctx->pc = 0x1349ecu;
    // NOP
    ctx->pc = 0x1349f0u;
}
