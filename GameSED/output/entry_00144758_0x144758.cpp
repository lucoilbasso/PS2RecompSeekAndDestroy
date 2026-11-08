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

// Function: entry_00144758
// Address: 0x144758 - 0x144790
void entry_00144758_0x144758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144758_0x144758");
#endif

    switch (ctx->pc) {
        case 0x144760u: goto label_144760;
        case 0x144770u: goto label_144770;
        case 0x144778u: goto label_144778;
        default: break;
    }

    ctx->pc = 0x144758u;

    // 0x144758: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144758u;
    SET_GPR_U32(ctx, 31, 0x144760u);
    ctx->pc = 0x14475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144758u;
    // 0x14475c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144758u, 0x144760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144760u;
label_144760:
    // 0x144760: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144764: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x144768: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144768u;
    SET_GPR_U32(ctx, 31, 0x144770u);
    ctx->pc = 0x14476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144768u;
    // 0x14476c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144768u, 0x144770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144770u;
label_144770:
    // 0x144770: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144770u;
    SET_GPR_U32(ctx, 31, 0x144778u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144770u, 0x144778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144778u;
label_144778:
    // 0x144778: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14477c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144788: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144788u;
    SET_GPR_U32(ctx, 31, 0x144790u);
    ctx->pc = 0x14478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144788u;
    // 0x14478c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144788u, 0x144790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144790u;
}
