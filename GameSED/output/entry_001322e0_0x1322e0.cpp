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

// Function: entry_001322e0
// Address: 0x1322e0 - 0x1322ec
void entry_001322e0_0x1322e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001322e0_0x1322e0");
#endif

    ctx->pc = 0x1322e0u;

    // 0x1322e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1322e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322e4: 0xc04c10a  jal         func_130428
    ctx->pc = 0x1322E4u;
    SET_GPR_U32(ctx, 31, 0x1322ECu);
    ctx->pc = 0x1322E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322E4u;
    // 0x1322e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130428u, 0x1322E4u, 0x1322ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322ECu;
}
