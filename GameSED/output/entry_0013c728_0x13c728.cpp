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

// Function: entry_0013c728
// Address: 0x13c728 - 0x13c730
void entry_0013c728_0x13c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c728_0x13c728");
#endif

    ctx->pc = 0x13c728u;

    // 0x13c728: 0xc04ec24  jal         func_13B090
    ctx->pc = 0x13C728u;
    SET_GPR_U32(ctx, 31, 0x13C730u);
    ctx->pc = 0x13C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C728u;
    // 0x13c72c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B090u, 0x13C728u, 0x13C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C730u;
}
