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

// Function: entry_00144380
// Address: 0x144380 - 0x144394
void entry_00144380_0x144380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144380_0x144380");
#endif

    switch (ctx->pc) {
        case 0x144388u: goto label_144388;
        case 0x144390u: goto label_144390;
        default: break;
    }

    ctx->pc = 0x144380u;

    // 0x144380: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144380u;
    SET_GPR_U32(ctx, 31, 0x144388u);
    ctx->pc = 0x144384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144380u;
    // 0x144384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144380u, 0x144388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144388u;
label_144388:
    // 0x144388: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x144388u;
    SET_GPR_U32(ctx, 31, 0x144390u);
    ctx->pc = 0x14438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144388u;
    // 0x14438c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x144388u, 0x144390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144390u;
label_144390:
    // 0x144390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144394u;
}
