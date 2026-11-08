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

// Function: entry_001825e0
// Address: 0x1825e0 - 0x1825ec
void entry_001825e0_0x1825e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001825e0_0x1825e0");
#endif

    ctx->pc = 0x1825e0u;

    // 0x1825e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1825e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825e4: 0xc060650  jal         func_181940
    ctx->pc = 0x1825E4u;
    SET_GPR_U32(ctx, 31, 0x1825ECu);
    ctx->pc = 0x1825E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825E4u;
    // 0x1825e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x1825E4u, 0x1825ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825ECu;
}
