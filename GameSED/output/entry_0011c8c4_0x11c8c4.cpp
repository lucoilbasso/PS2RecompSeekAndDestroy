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

// Function: entry_0011c8c4
// Address: 0x11c8c4 - 0x11c8cc
void entry_0011c8c4_0x11c8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c8c4_0x11c8c4");
#endif

    ctx->pc = 0x11c8c4u;

    // 0x11c8c4: 0xc05e7f4  jal         func_179FD0
    ctx->pc = 0x11C8C4u;
    SET_GPR_U32(ctx, 31, 0x11C8CCu);
    ctx->pc = 0x11C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8C4u;
    // 0x11c8c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FD0u, 0x11C8C4u, 0x11C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8CCu;
}
