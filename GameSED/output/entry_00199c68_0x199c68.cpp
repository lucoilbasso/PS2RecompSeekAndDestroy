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

// Function: entry_00199c68
// Address: 0x199c68 - 0x199c70
void entry_00199c68_0x199c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c68_0x199c68");
#endif

    ctx->pc = 0x199c68u;

    // 0x199c68: 0xc0685ca  jal         func_1A1728
    ctx->pc = 0x199C68u;
    SET_GPR_U32(ctx, 31, 0x199C70u);
    ctx->pc = 0x199C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C68u;
    // 0x199c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1728u, 0x199C68u, 0x199C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C70u;
}
