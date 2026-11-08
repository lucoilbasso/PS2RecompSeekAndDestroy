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

// Function: entry_00144270
// Address: 0x144270 - 0x14429c
void entry_00144270_0x144270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144270_0x144270");
#endif

    switch (ctx->pc) {
        case 0x144278u: goto label_144278;
        case 0x144280u: goto label_144280;
        case 0x144298u: goto label_144298;
        default: break;
    }

    ctx->pc = 0x144270u;

    // 0x144270: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144270u;
    SET_GPR_U32(ctx, 31, 0x144278u);
    ctx->pc = 0x144274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144270u;
    // 0x144274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144270u, 0x144278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144278u;
label_144278:
    // 0x144278: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 31, 0x144280u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144278u, 0x144280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144280u;
label_144280:
    // 0x144280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x144284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14428c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14428cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144290: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144290u;
    SET_GPR_U32(ctx, 31, 0x144298u);
    ctx->pc = 0x144294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144290u;
    // 0x144294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144290u, 0x144298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144298u;
label_144298:
    // 0x144298: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x14429cu;
}
