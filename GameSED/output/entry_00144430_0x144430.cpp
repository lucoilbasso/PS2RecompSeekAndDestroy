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

// Function: entry_00144430
// Address: 0x144430 - 0x144444
void entry_00144430_0x144430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144430_0x144430");
#endif

    switch (ctx->pc) {
        case 0x144438u: goto label_144438;
        case 0x144440u: goto label_144440;
        default: break;
    }

    ctx->pc = 0x144430u;

    // 0x144430: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144430u;
    SET_GPR_U32(ctx, 31, 0x144438u);
    ctx->pc = 0x144434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144430u;
    // 0x144434: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144430u, 0x144438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144438u;
label_144438:
    // 0x144438: 0xc060a02  jal         func_182808
    ctx->pc = 0x144438u;
    SET_GPR_U32(ctx, 31, 0x144440u);
    ctx->pc = 0x14443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144438u;
    // 0x14443c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x144438u, 0x144440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144440u;
label_144440:
    // 0x144440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144444u;
}
