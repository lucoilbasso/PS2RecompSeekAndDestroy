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

// Function: entry_001d49e8
// Address: 0x1d49e8 - 0x1d49f8
void entry_001d49e8_0x1d49e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d49e8_0x1d49e8");
#endif

    switch (ctx->pc) {
        case 0x1d49f0u: goto label_1d49f0;
        default: break;
    }

    ctx->pc = 0x1d49e8u;

    // 0x1d49e8: 0xc074086  jal         func_1D0218
    ctx->pc = 0x1D49E8u;
    SET_GPR_U32(ctx, 31, 0x1D49F0u);
    ctx->pc = 0x1D0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0218u, 0x1D49E8u, 0x1D49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49F0u;
label_1d49f0:
    // 0x1d49f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D49F0u;
    {
        const bool branch_taken_0x1d49f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49F0u;
        // 0x1d49f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49f0) {
            ctx->pc = 0x1D4A2Cu;
            return;
        }
    }
    ctx->pc = 0x1D49F8u;
}
