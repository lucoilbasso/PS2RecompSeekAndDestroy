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

// Function: entry_0013e9d4
// Address: 0x13e9d4 - 0x13e9dc
void entry_0013e9d4_0x13e9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e9d4_0x13e9d4");
#endif

    ctx->pc = 0x13e9d4u;

    // 0x13e9d4: 0xc04f072  jal         func_13C1C8
    ctx->pc = 0x13E9D4u;
    SET_GPR_U32(ctx, 31, 0x13E9DCu);
    ctx->pc = 0x13E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9D4u;
    // 0x13e9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1C8u, 0x13E9D4u, 0x13E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9DCu;
}
