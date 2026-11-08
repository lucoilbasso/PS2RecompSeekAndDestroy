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

// Function: caseD_3
// Address: 0x134a28 - 0x134a38
void caseD_3_0x134a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x134a28");
#endif

    switch (ctx->pc) {
        case 0x134a30u: goto label_134a30;
        default: break;
    }

    ctx->pc = 0x134a28u;

    // 0x134a28: 0xc04e69a  jal         func_139A68
    ctx->pc = 0x134A28u;
    SET_GPR_U32(ctx, 31, 0x134A30u);
    ctx->pc = 0x134A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A28u;
    // 0x134a2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139A68u, 0x134A28u, 0x134A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A30u;
label_134a30:
    // 0x134a30: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x134A30u;
    {
        const bool branch_taken_0x134a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A30u;
        // 0x134a34: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a30) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134A38u;
}
