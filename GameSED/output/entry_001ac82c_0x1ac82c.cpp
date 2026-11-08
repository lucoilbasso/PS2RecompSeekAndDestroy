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

// Function: entry_001ac82c
// Address: 0x1ac82c - 0x1ac838
void entry_001ac82c_0x1ac82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac82c_0x1ac82c");
#endif

    switch (ctx->pc) {
        case 0x1ac834u: goto label_1ac834;
        default: break;
    }

    ctx->pc = 0x1ac82cu;

    // 0x1ac82c: 0xc06b048  jal         func_1AC120
    ctx->pc = 0x1AC82Cu;
    SET_GPR_U32(ctx, 31, 0x1AC834u);
    ctx->pc = 0x1AC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC82Cu;
    // 0x1ac830: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC120u, 0x1AC82Cu, 0x1AC834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC834u;
label_1ac834:
    // 0x1ac834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ac838u;
}
