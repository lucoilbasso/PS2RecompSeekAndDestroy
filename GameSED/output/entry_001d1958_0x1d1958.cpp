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

// Function: entry_001d1958
// Address: 0x1d1958 - 0x1d1968
void entry_001d1958_0x1d1958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1958_0x1d1958");
#endif

    switch (ctx->pc) {
        case 0x1d1960u: goto label_1d1960;
        default: break;
    }

    ctx->pc = 0x1d1958u;

    // 0x1d1958: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1D1958u;
    SET_GPR_U32(ctx, 31, 0x1D1960u);
    ctx->pc = 0x1D195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1958u;
    // 0x1d195c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1D1958u, 0x1D1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1960u;
label_1d1960:
    // 0x1d1960: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1D1960u;
    {
        const bool branch_taken_0x1d1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1960u;
        // 0x1d1964: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1960) {
            ctx->pc = 0x1D1B50u;
            return;
        }
    }
    ctx->pc = 0x1D1968u;
}
