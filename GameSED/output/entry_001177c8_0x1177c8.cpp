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

// Function: entry_001177c8
// Address: 0x1177c8 - 0x117814
void entry_001177c8_0x1177c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001177c8_0x1177c8");
#endif

    switch (ctx->pc) {
        case 0x1177dcu: goto label_1177dc;
        case 0x1177e8u: goto label_1177e8;
        case 0x1177f8u: goto label_1177f8;
        case 0x117804u: goto label_117804;
        default: break;
    }

    ctx->pc = 0x1177c8u;

    // 0x1177c8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1177c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1177cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1177ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177d0: 0x24a5d1d0  addiu       $a1, $a1, -0x2E30
    ctx->pc = 0x1177d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955472));
    // 0x1177d4: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177D4u;
    SET_GPR_U32(ctx, 31, 0x1177DCu);
    ctx->pc = 0x1177D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177D4u;
    // 0x1177d8: 0x2610d1c0  addiu       $s0, $s0, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177D4u, 0x1177DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177DCu;
label_1177dc:
    // 0x1177dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1177dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177e0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177E0u;
    SET_GPR_U32(ctx, 31, 0x1177E8u);
    ctx->pc = 0x1177E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177E0u;
    // 0x1177e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177E0u, 0x1177E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177E8u;
label_1177e8:
    // 0x1177e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1177e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1177ec: 0x24a54638  addiu       $a1, $a1, 0x4638
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17976));
    // 0x1177f0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177F0u;
    SET_GPR_U32(ctx, 31, 0x1177F8u);
    ctx->pc = 0x1177F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177F0u;
    // 0x1177f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177F0u, 0x1177F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177F8u;
label_1177f8:
    // 0x1177f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1177f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177fc: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1177FCu;
    SET_GPR_U32(ctx, 31, 0x117804u);
    ctx->pc = 0x117800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177FCu;
    // 0x117800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1177FCu, 0x117804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117804u;
label_117804:
    // 0x117804: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x117808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11780c: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11780Cu;
    SET_GPR_U32(ctx, 31, 0x117814u);
    ctx->pc = 0x117810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11780Cu;
    // 0x117810: 0x24a54668  addiu       $a1, $a1, 0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11780Cu, 0x117814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117814u;
}
