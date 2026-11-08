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

// Function: entry_00183590
// Address: 0x183590 - 0x183598
void entry_00183590_0x183590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183590_0x183590");
#endif

    ctx->pc = 0x183590u;

    // 0x183590: 0xc060e0c  jal         func_183830
    ctx->pc = 0x183590u;
    SET_GPR_U32(ctx, 31, 0x183598u);
    ctx->pc = 0x183594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183590u;
    // 0x183594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183830u, 0x183590u, 0x183598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183598u;
}
