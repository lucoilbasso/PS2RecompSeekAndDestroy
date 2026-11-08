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

// Function: entry_00110070
// Address: 0x110070 - 0x110078
void entry_00110070_0x110070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110070_0x110070");
#endif

    ctx->pc = 0x110070u;

    // 0x110070: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110070u;
    SET_GPR_U32(ctx, 31, 0x110078u);
    ctx->pc = 0x110074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110070u;
    // 0x110074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110070u, 0x110078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110078u;
}
