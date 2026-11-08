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

// Function: caseD_d
// Address: 0x1345f8 - 0x134608
void caseD_d_0x1345f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1345f8");
#endif

    switch (ctx->pc) {
        case 0x134600u: goto label_134600;
        default: break;
    }

    ctx->pc = 0x1345f8u;

    // 0x1345f8: 0xc04e4a8  jal         func_1392A0
    ctx->pc = 0x1345F8u;
    SET_GPR_U32(ctx, 31, 0x134600u);
    ctx->pc = 0x1392A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392A0u, 0x1345F8u, 0x134600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134600u;
label_134600:
    // 0x134600: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x134600u;
    {
        const bool branch_taken_0x134600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134600u;
        // 0x134604: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134600) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x134608u;
}
