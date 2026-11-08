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

// Function: entry_001c22b0
// Address: 0x1c22b0 - 0x1c22c0
void entry_001c22b0_0x1c22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c22b0_0x1c22b0");
#endif

    switch (ctx->pc) {
        case 0x1c22b8u: goto label_1c22b8;
        default: break;
    }

    ctx->pc = 0x1c22b0u;

    // 0x1c22b0: 0xc0709f0  jal         func_1C27C0
    ctx->pc = 0x1C22B0u;
    SET_GPR_U32(ctx, 31, 0x1C22B8u);
    ctx->pc = 0x1C22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22B0u;
    // 0x1c22b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27C0u, 0x1C22B0u, 0x1C22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22B8u;
label_1c22b8:
    // 0x1c22b8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C22B8u;
    {
        const bool branch_taken_0x1c22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22b8) {
            ctx->pc = 0x1C2250u;
            return;
        }
    }
    ctx->pc = 0x1C22C0u;
}
