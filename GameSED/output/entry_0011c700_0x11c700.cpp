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

// Function: entry_0011c700
// Address: 0x11c700 - 0x11c708
void entry_0011c700_0x11c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c700_0x11c700");
#endif

    ctx->pc = 0x11c700u;

    // 0x11c700: 0xc04702e  jal         func_11C0B8
    ctx->pc = 0x11C700u;
    SET_GPR_U32(ctx, 31, 0x11C708u);
    ctx->pc = 0x11C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C700u;
    // 0x11c704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B8u, 0x11C700u, 0x11C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C708u;
}
