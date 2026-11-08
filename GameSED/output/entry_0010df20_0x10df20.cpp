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

// Function: entry_0010df20
// Address: 0x10df20 - 0x10df28
void entry_0010df20_0x10df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df20_0x10df20");
#endif

    ctx->pc = 0x10df20u;

    // 0x10df20: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10DF20u;
    SET_GPR_U32(ctx, 31, 0x10DF28u);
    ctx->pc = 0x10DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF20u;
    // 0x10df24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10DF20u, 0x10DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF28u;
}
