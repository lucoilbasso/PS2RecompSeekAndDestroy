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

// Function: entry_001031a8
// Address: 0x1031a8 - 0x103200
void entry_001031a8_0x1031a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001031a8_0x1031a8");
#endif

    switch (ctx->pc) {
        case 0x1031b4u: goto label_1031b4;
        case 0x1031c4u: goto label_1031c4;
        case 0x1031d0u: goto label_1031d0;
        case 0x1031e0u: goto label_1031e0;
        case 0x1031f0u: goto label_1031f0;
        case 0x1031f8u: goto label_1031f8;
        default: break;
    }

    ctx->pc = 0x1031a8u;

    // 0x1031a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1031a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031ac: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1031ACu;
    SET_GPR_U32(ctx, 31, 0x1031B4u);
    ctx->pc = 0x1031B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031ACu;
    // 0x1031b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1031ACu, 0x1031B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031B4u;
label_1031b4:
    // 0x1031b4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1031b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1031b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1031b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031bc: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1031BCu;
    SET_GPR_U32(ctx, 31, 0x1031C4u);
    ctx->pc = 0x1031C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031BCu;
    // 0x1031c0: 0x24a5cf30  addiu       $a1, $a1, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1031BCu, 0x1031C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031C4u;
label_1031c4:
    // 0x1031c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1031c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031c8: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1031C8u;
    SET_GPR_U32(ctx, 31, 0x1031D0u);
    ctx->pc = 0x1031CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031C8u;
    // 0x1031cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1031C8u, 0x1031D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031D0u;
label_1031d0:
    // 0x1031d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1031d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1031d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1031D8u;
    SET_GPR_U32(ctx, 31, 0x1031E0u);
    ctx->pc = 0x1031DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031D8u;
    // 0x1031dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1031D8u, 0x1031E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031E0u;
label_1031e0:
    // 0x1031e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1031e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1031e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1031e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031e8: 0xc067374  jal         func_19CDD0
    ctx->pc = 0x1031E8u;
    SET_GPR_U32(ctx, 31, 0x1031F0u);
    ctx->pc = 0x1031ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031E8u;
    // 0x1031ec: 0x24a5cf38  addiu       $a1, $a1, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDD0u, 0x1031E8u, 0x1031F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031F0u;
label_1031f0:
    // 0x1031f0: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x1031F0u;
    SET_GPR_U32(ctx, 31, 0x1031F8u);
    ctx->pc = 0x1031F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031F0u;
    // 0x1031f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x1031F0u, 0x1031F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031F8u;
label_1031f8:
    // 0x1031f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1031f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1031fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103200u;
}
