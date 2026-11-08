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

// Function: entry_00144518
// Address: 0x144518 - 0x144540
void entry_00144518_0x144518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144518_0x144518");
#endif

    switch (ctx->pc) {
        case 0x144520u: goto label_144520;
        case 0x144528u: goto label_144528;
        default: break;
    }

    ctx->pc = 0x144518u;

    // 0x144518: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144518u;
    SET_GPR_U32(ctx, 31, 0x144520u);
    ctx->pc = 0x14451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144518u;
    // 0x14451c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144518u, 0x144520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144520u;
label_144520:
    // 0x144520: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144520u;
    SET_GPR_U32(ctx, 31, 0x144528u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144520u, 0x144528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144528u;
label_144528:
    // 0x144528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14452c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14452cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144538: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144538u;
    SET_GPR_U32(ctx, 31, 0x144540u);
    ctx->pc = 0x14453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144538u;
    // 0x14453c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144538u, 0x144540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144540u;
}
