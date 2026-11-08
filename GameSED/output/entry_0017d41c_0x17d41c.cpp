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

// Function: entry_0017d41c
// Address: 0x17d41c - 0x17d450
void entry_0017d41c_0x17d41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d41c_0x17d41c");
#endif

    switch (ctx->pc) {
        case 0x17d42cu: goto label_17d42c;
        case 0x17d434u: goto label_17d434;
        default: break;
    }

    ctx->pc = 0x17d41cu;

    // 0x17d41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d424: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17D424u;
    SET_GPR_U32(ctx, 31, 0x17D42Cu);
    ctx->pc = 0x17D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D424u;
    // 0x17d428: 0x24040105  addiu       $a0, $zero, 0x105 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17D424u, 0x17D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D42Cu;
label_17d42c:
    // 0x17d42c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17D42Cu;
    SET_GPR_U32(ctx, 31, 0x17D434u);
    ctx->pc = 0x17D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D42Cu;
    // 0x17d430: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17D42Cu, 0x17D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D434u;
label_17d434:
    // 0x17d434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17d438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d43c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17d440: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
    // 0x17d444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d448: 0xc05f51e  jal         func_17D478
    ctx->pc = 0x17D448u;
    SET_GPR_U32(ctx, 31, 0x17D450u);
    ctx->pc = 0x17D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D448u;
    // 0x17d44c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D478u, 0x17D448u, 0x17D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D450u;
}
