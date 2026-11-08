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

// Function: caseD_10
// Address: 0x134660 - 0x134670
void caseD_10_0x134660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x134660");
#endif

    switch (ctx->pc) {
        case 0x134668u: goto label_134668;
        default: break;
    }

    ctx->pc = 0x134660u;

    // 0x134660: 0xc04e4e4  jal         func_139390
    ctx->pc = 0x134660u;
    SET_GPR_U32(ctx, 31, 0x134668u);
    ctx->pc = 0x139390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139390u, 0x134660u, 0x134668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134668u;
label_134668:
    // 0x134668: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134668u;
    {
        const bool branch_taken_0x134668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134668u;
        // 0x13466c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134668) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x134670u;
}
