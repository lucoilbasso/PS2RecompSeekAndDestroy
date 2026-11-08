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

// Function: entry_001418e0
// Address: 0x1418e0 - 0x1418e8
void entry_001418e0_0x1418e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001418e0_0x1418e0");
#endif

    ctx->pc = 0x1418e0u;

    // 0x1418e0: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x1418E0u;
    SET_GPR_U32(ctx, 31, 0x1418E8u);
    ctx->pc = 0x1418E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418E0u;
    // 0x1418e4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x1418E0u, 0x1418E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418E8u;
}
