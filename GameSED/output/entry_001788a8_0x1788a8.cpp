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

// Function: entry_001788a8
// Address: 0x1788a8 - 0x1788b8
void entry_001788a8_0x1788a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001788a8_0x1788a8");
#endif

    switch (ctx->pc) {
        case 0x1788b0u: goto label_1788b0;
        default: break;
    }

    ctx->pc = 0x1788a8u;

    // 0x1788a8: 0xc06eb50  jal         func_1BAD40
    ctx->pc = 0x1788A8u;
    SET_GPR_U32(ctx, 31, 0x1788B0u);
    ctx->pc = 0x1788ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788A8u;
    // 0x1788ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD40u, 0x1788A8u, 0x1788B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788B0u;
label_1788b0:
    // 0x1788b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1788B0u;
    {
        const bool branch_taken_0x1788b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1788b0) {
            ctx->pc = 0x1788C0u;
            return;
        }
    }
    ctx->pc = 0x1788B8u;
}
