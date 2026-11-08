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

// Function: entry_00145e40
// Address: 0x145e40 - 0x145e48
void entry_00145e40_0x145e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e40_0x145e40");
#endif

    ctx->pc = 0x145e40u;

    // 0x145e40: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x145E40u;
    SET_GPR_U32(ctx, 31, 0x145E48u);
    ctx->pc = 0x145E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E40u;
    // 0x145e44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x145E40u, 0x145E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E48u;
}
