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

// Function: entry_001786b0
// Address: 0x1786b0 - 0x1786b8
void entry_001786b0_0x1786b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001786b0_0x1786b0");
#endif

    ctx->pc = 0x1786b0u;

    // 0x1786b0: 0xc05e048  jal         func_178120
    ctx->pc = 0x1786B0u;
    SET_GPR_U32(ctx, 31, 0x1786B8u);
    ctx->pc = 0x1786B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786B0u;
    // 0x1786b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178120u, 0x1786B0u, 0x1786B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786B8u;
}
