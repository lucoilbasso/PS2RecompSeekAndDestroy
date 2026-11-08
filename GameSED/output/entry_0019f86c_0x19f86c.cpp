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

// Function: entry_0019f86c
// Address: 0x19f86c - 0x19f880
void entry_0019f86c_0x19f86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f86c_0x19f86c");
#endif

    switch (ctx->pc) {
        case 0x19f874u: goto label_19f874;
        default: break;
    }

    ctx->pc = 0x19f86cu;

    // 0x19f86c: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x19F86Cu;
    SET_GPR_U32(ctx, 31, 0x19F874u);
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x19F86Cu, 0x19F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F874u;
label_19f874:
    // 0x19f874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F874u;
    {
        const bool branch_taken_0x19f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F874u;
        // 0x19f878: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f874) {
            ctx->pc = 0x19F884u;
            return;
        }
    }
    ctx->pc = 0x19F87Cu;
    // 0x19f87c: 0x0  nop
    ctx->pc = 0x19f87cu;
    // NOP
    ctx->pc = 0x19f880u;
}
