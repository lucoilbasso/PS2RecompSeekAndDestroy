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

// Function: entry_001c22a0
// Address: 0x1c22a0 - 0x1c22b0
void entry_001c22a0_0x1c22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c22a0_0x1c22a0");
#endif

    switch (ctx->pc) {
        case 0x1c22a8u: goto label_1c22a8;
        default: break;
    }

    ctx->pc = 0x1c22a0u;

    // 0x1c22a0: 0xc06f8fe  jal         func_1BE3F8
    ctx->pc = 0x1C22A0u;
    SET_GPR_U32(ctx, 31, 0x1C22A8u);
    ctx->pc = 0x1C22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22A0u;
    // 0x1c22a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3F8u, 0x1C22A0u, 0x1C22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22A8u;
label_1c22a8:
    // 0x1c22a8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C22A8u;
    {
        const bool branch_taken_0x1c22a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22a8) {
            ctx->pc = 0x1C2250u;
            return;
        }
    }
    ctx->pc = 0x1C22B0u;
}
