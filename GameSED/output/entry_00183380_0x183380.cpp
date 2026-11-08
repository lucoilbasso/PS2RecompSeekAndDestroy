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

// Function: entry_00183380
// Address: 0x183380 - 0x183388
void entry_00183380_0x183380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183380_0x183380");
#endif

    ctx->pc = 0x183380u;

    // 0x183380: 0xc060650  jal         func_181940
    ctx->pc = 0x183380u;
    SET_GPR_U32(ctx, 31, 0x183388u);
    ctx->pc = 0x183384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183380u;
    // 0x183384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x183380u, 0x183388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183388u;
}
