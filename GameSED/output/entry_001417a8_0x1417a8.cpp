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

// Function: entry_001417a8
// Address: 0x1417a8 - 0x1417b0
void entry_001417a8_0x1417a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001417a8_0x1417a8");
#endif

    ctx->pc = 0x1417a8u;

    // 0x1417a8: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x1417A8u;
    SET_GPR_U32(ctx, 31, 0x1417B0u);
    ctx->pc = 0x1417ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417A8u;
    // 0x1417ac: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x1417A8u, 0x1417B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417B0u;
}
