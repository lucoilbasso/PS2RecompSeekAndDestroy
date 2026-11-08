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

// Function: defMain
// Address: 0x170900 - 0x170918
void defMain_0x170900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("defMain_0x170900");
#endif

    switch (ctx->pc) {
        case 0x170908u: goto label_170908;
        case 0x170910u: goto label_170910;
        default: break;
    }

    ctx->pc = 0x170900u;

    // 0x170900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170908:
    // 0x170908: 0xc05c120  jal         func_170480
    ctx->pc = 0x170908u;
    SET_GPR_U32(ctx, 31, 0x170910u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x170908u, 0x170910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170910u;
label_170910:
    // 0x170910: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x170910u;
    {
        const bool branch_taken_0x170910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170910) {
            ctx->pc = 0x170908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170908;
        }
    }
    ctx->pc = 0x170918u;
}
