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

// Function: entry_001d7f34
// Address: 0x1d7f34 - 0x1d7f44
void entry_001d7f34_0x1d7f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f34_0x1d7f34");
#endif

    ctx->pc = 0x1d7f34u;

    // 0x1d7f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7F34u;
    {
        const bool branch_taken_0x1d7f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F34u;
        // 0x1d7f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f34) {
            ctx->pc = 0x1D7F44u;
            return;
        }
    }
    ctx->pc = 0x1D7F3Cu;
    // 0x1d7f3c: 0xc060e56  jal         func_183958
    ctx->pc = 0x1D7F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F44u);
    ctx->pc = 0x1D7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F3Cu;
    // 0x1d7f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x1D7F3Cu, 0x1D7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F44u;
}
