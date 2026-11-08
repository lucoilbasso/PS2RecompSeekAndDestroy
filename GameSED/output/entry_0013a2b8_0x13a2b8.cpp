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

// Function: entry_0013a2b8
// Address: 0x13a2b8 - 0x13a2c4
void entry_0013a2b8_0x13a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a2b8_0x13a2b8");
#endif

    ctx->pc = 0x13a2b8u;

    // 0x13a2b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2bc: 0xc04e734  jal         func_139CD0
    ctx->pc = 0x13A2BCu;
    SET_GPR_U32(ctx, 31, 0x13A2C4u);
    ctx->pc = 0x13A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2BCu;
    // 0x13a2c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CD0u, 0x13A2BCu, 0x13A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2C4u;
}
