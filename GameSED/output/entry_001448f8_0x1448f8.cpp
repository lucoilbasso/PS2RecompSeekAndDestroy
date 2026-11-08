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

// Function: entry_001448f8
// Address: 0x1448f8 - 0x144930
void entry_001448f8_0x1448f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001448f8_0x1448f8");
#endif

    switch (ctx->pc) {
        case 0x144900u: goto label_144900;
        case 0x144910u: goto label_144910;
        case 0x144918u: goto label_144918;
        default: break;
    }

    ctx->pc = 0x1448f8u;

    // 0x1448f8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1448F8u;
    SET_GPR_U32(ctx, 31, 0x144900u);
    ctx->pc = 0x1448FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448F8u;
    // 0x1448fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1448F8u, 0x144900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144900u;
label_144900:
    // 0x144900: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144904: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x144904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x144908: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144908u;
    SET_GPR_U32(ctx, 31, 0x144910u);
    ctx->pc = 0x14490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144908u;
    // 0x14490c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144908u, 0x144910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144910u;
label_144910:
    // 0x144910: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144910u;
    SET_GPR_U32(ctx, 31, 0x144918u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144910u, 0x144918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144918u;
label_144918:
    // 0x144918: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14491c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144928: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144928u;
    SET_GPR_U32(ctx, 31, 0x144930u);
    ctx->pc = 0x14492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144928u;
    // 0x14492c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144928u, 0x144930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144930u;
}
