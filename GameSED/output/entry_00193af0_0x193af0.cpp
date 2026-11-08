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

// Function: entry_00193af0
// Address: 0x193af0 - 0x193af8
void entry_00193af0_0x193af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193af0_0x193af0");
#endif

    ctx->pc = 0x193af0u;

    // 0x193af0: 0xc065546  jal         func_195518
    ctx->pc = 0x193AF0u;
    SET_GPR_U32(ctx, 31, 0x193AF8u);
    ctx->pc = 0x193AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AF0u;
    // 0x193af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195518u, 0x193AF0u, 0x193AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AF8u;
}
