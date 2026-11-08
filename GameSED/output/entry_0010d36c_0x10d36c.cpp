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

// Function: entry_0010d36c
// Address: 0x10d36c - 0x10d378
void entry_0010d36c_0x10d36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d36c_0x10d36c");
#endif

    switch (ctx->pc) {
        case 0x10d374u: goto label_10d374;
        default: break;
    }

    ctx->pc = 0x10d36cu;

    // 0x10d36c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10D36Cu;
    SET_GPR_U32(ctx, 31, 0x10D374u);
    ctx->pc = 0x10D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D36Cu;
    // 0x10d370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10D36Cu, 0x10D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D374u;
label_10d374:
    // 0x10d374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10d374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10d378u;
}
