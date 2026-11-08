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

// Function: entry_0013c6d8
// Address: 0x13c6d8 - 0x13c6e0
void entry_0013c6d8_0x13c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c6d8_0x13c6d8");
#endif

    ctx->pc = 0x13c6d8u;

    // 0x13c6d8: 0xc061eb4  jal         func_187AD0
    ctx->pc = 0x13C6D8u;
    SET_GPR_U32(ctx, 31, 0x13C6E0u);
    ctx->pc = 0x13C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6D8u;
    // 0x13c6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AD0u, 0x13C6D8u, 0x13C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6E0u;
}
