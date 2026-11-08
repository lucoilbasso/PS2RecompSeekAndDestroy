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

// Function: entry_00135510
// Address: 0x135510 - 0x13551c
void entry_00135510_0x135510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135510_0x135510");
#endif

    switch (ctx->pc) {
        case 0x135518u: goto label_135518;
        default: break;
    }

    ctx->pc = 0x135510u;

    // 0x135510: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135510u;
    SET_GPR_U32(ctx, 31, 0x135518u);
    ctx->pc = 0x135514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135510u;
    // 0x135514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135510u, 0x135518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135518u;
label_135518:
    // 0x135518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13551cu;
}
