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

// Function: entry_001cf5a4
// Address: 0x1cf5a4 - 0x1cf5ac
void entry_001cf5a4_0x1cf5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf5a4_0x1cf5a4");
#endif

    ctx->pc = 0x1cf5a4u;

    // 0x1cf5a4: 0xc074086  jal         func_1D0218
    ctx->pc = 0x1CF5A4u;
    SET_GPR_U32(ctx, 31, 0x1CF5ACu);
    ctx->pc = 0x1CF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5A4u;
    // 0x1cf5a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0218u, 0x1CF5A4u, 0x1CF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5ACu;
}
