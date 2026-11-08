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

// Function: entry_001590a4
// Address: 0x1590a4 - 0x1590b0
void entry_001590a4_0x1590a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001590a4_0x1590a4");
#endif

    ctx->pc = 0x1590a4u;

    // 0x1590a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1590a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590a8: 0xc0562d2  jal         func_158B48
    ctx->pc = 0x1590A8u;
    SET_GPR_U32(ctx, 31, 0x1590B0u);
    ctx->pc = 0x1590ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590A8u;
    // 0x1590ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B48u, 0x1590A8u, 0x1590B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590B0u;
}
