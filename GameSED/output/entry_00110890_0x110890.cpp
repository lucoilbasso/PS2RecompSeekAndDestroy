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

// Function: entry_00110890
// Address: 0x110890 - 0x110898
void entry_00110890_0x110890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110890_0x110890");
#endif

    ctx->pc = 0x110890u;

    // 0x110890: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x110890u;
    SET_GPR_U32(ctx, 31, 0x110898u);
    ctx->pc = 0x110894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110890u;
    // 0x110894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x110890u, 0x110898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110898u;
}
