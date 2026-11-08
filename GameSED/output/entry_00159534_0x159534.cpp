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

// Function: entry_00159534
// Address: 0x159534 - 0x159540
void entry_00159534_0x159534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159534_0x159534");
#endif

    ctx->pc = 0x159534u;

    // 0x159534: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x159534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159538: 0xc0562d2  jal         func_158B48
    ctx->pc = 0x159538u;
    SET_GPR_U32(ctx, 31, 0x159540u);
    ctx->pc = 0x15953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159538u;
    // 0x15953c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B48u, 0x159538u, 0x159540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159540u;
}
