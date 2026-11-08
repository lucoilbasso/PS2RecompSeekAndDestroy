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

// Function: entry_0016be9c
// Address: 0x16be9c - 0x16bea8
void entry_0016be9c_0x16be9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be9c_0x16be9c");
#endif

    switch (ctx->pc) {
        case 0x16bea4u: goto label_16bea4;
        default: break;
    }

    ctx->pc = 0x16be9cu;

    // 0x16be9c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16BE9Cu;
    SET_GPR_U32(ctx, 31, 0x16BEA4u);
    ctx->pc = 0x16BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE9Cu;
    // 0x16bea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16BE9Cu, 0x16BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEA4u;
label_16bea4:
    // 0x16bea4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16bea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16bea8u;
}
