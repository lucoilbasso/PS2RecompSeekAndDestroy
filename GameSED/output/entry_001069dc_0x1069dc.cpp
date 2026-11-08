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

// Function: entry_001069dc
// Address: 0x1069dc - 0x1069e4
void entry_001069dc_0x1069dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001069dc_0x1069dc");
#endif

    ctx->pc = 0x1069dcu;

    // 0x1069dc: 0xc041aae  jal         func_106AB8
    ctx->pc = 0x1069DCu;
    SET_GPR_U32(ctx, 31, 0x1069E4u);
    ctx->pc = 0x1069E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069DCu;
    // 0x1069e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106AB8u, 0x1069DCu, 0x1069E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1069E4u;
}
