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

// Function: entry_001188c8
// Address: 0x1188c8 - 0x1188d0
void entry_001188c8_0x1188c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001188c8_0x1188c8");
#endif

    ctx->pc = 0x1188c8u;

    // 0x1188c8: 0xc04697e  jal         func_11A5F8
    ctx->pc = 0x1188C8u;
    SET_GPR_U32(ctx, 31, 0x1188D0u);
    ctx->pc = 0x1188CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188C8u;
    // 0x1188cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A5F8u, 0x1188C8u, 0x1188D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188D0u;
}
