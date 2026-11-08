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

// Function: entry_001020c8
// Address: 0x1020c8 - 0x1020f0
void entry_001020c8_0x1020c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001020c8_0x1020c8");
#endif

    switch (ctx->pc) {
        case 0x1020d0u: goto label_1020d0;
        case 0x1020e0u: goto label_1020e0;
        case 0x1020e8u: goto label_1020e8;
        default: break;
    }

    ctx->pc = 0x1020c8u;

    // 0x1020c8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1020C8u;
    SET_GPR_U32(ctx, 31, 0x1020D0u);
    ctx->pc = 0x1020CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020C8u;
    // 0x1020cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1020C8u, 0x1020D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020D0u;
label_1020d0:
    // 0x1020d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1020d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1020d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1020d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020d8: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1020D8u;
    SET_GPR_U32(ctx, 31, 0x1020E0u);
    ctx->pc = 0x1020DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020D8u;
    // 0x1020dc: 0x24a5cf38  addiu       $a1, $a1, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1020D8u, 0x1020E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020E0u;
label_1020e0:
    // 0x1020e0: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x1020E0u;
    SET_GPR_U32(ctx, 31, 0x1020E8u);
    ctx->pc = 0x1020E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020E0u;
    // 0x1020e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x1020E0u, 0x1020E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020E8u;
label_1020e8:
    // 0x1020e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1020e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020ec: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1020ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1020f0u;
}
