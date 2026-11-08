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

// Function: entry_00144828
// Address: 0x144828 - 0x144860
void entry_00144828_0x144828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144828_0x144828");
#endif

    switch (ctx->pc) {
        case 0x144830u: goto label_144830;
        case 0x144840u: goto label_144840;
        case 0x144848u: goto label_144848;
        default: break;
    }

    ctx->pc = 0x144828u;

    // 0x144828: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144828u;
    SET_GPR_U32(ctx, 31, 0x144830u);
    ctx->pc = 0x14482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144828u;
    // 0x14482c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144828u, 0x144830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144830u;
label_144830:
    // 0x144830: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144834: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x144838: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144838u;
    SET_GPR_U32(ctx, 31, 0x144840u);
    ctx->pc = 0x14483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144838u;
    // 0x14483c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144838u, 0x144840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144840u;
label_144840:
    // 0x144840: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144840u;
    SET_GPR_U32(ctx, 31, 0x144848u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144840u, 0x144848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144848u;
label_144848:
    // 0x144848: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14484c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14484cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144858: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144858u;
    SET_GPR_U32(ctx, 31, 0x144860u);
    ctx->pc = 0x14485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144858u;
    // 0x14485c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144858u, 0x144860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144860u;
}
