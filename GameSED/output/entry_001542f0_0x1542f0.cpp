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

// Function: entry_001542f0
// Address: 0x1542f0 - 0x1542fc
void entry_001542f0_0x1542f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001542f0_0x1542f0");
#endif

    switch (ctx->pc) {
        case 0x1542f8u: goto label_1542f8;
        default: break;
    }

    ctx->pc = 0x1542f0u;

    // 0x1542f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1542F0u;
    SET_GPR_U32(ctx, 31, 0x1542F8u);
    ctx->pc = 0x1542F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542F0u;
    // 0x1542f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1542F0u, 0x1542F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542F8u;
label_1542f8:
    // 0x1542f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1542f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1542fcu;
}
